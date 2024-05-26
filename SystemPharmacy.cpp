#include "SystemPharmacy.h"
#include <iostream>
#include "HashMap.cpp"

using namespace std;

SystemPharmacy::SystemPharmacy(){
    saveCustomer(this->listCustomer);
}


void SystemPharmacy::saveCustomer(ListCustomer& listCustomer) {

       // Opening the file
    ifstream arch("Customer.txt");

    // File verification
    if (!arch.is_open()) {
        cout << "ERROR!!! NO SE ENCONTRO EL ARCHIVO" << endl;
        return;
    }

    string line;

    string* part;
    vector<string> parts;

    string* name;
    int* age;
    string* rut;
    string* disabled;
    string* pregnant;

    while (getline(arch, line)) {

        stringstream ss(line);
        
        while (getline(ss, *part, ';')) {

            parts.push_back(*part);

        }

        *name = parts[0];
        *age = stoi(parts[1]);
        *rut = parts[2];
        *disabled = parts[3];
        *pregnant = parts[4];



        if (*age > 60) {

            Customer* customer = new ThirdAge(*name,*rut,*age);
            listCustomer.addThirdAge(customer);

        } else if (*disabled == "true") {

            Customer* customer = new Disabled(*name,*rut,*age);
            listCustomer.addDisabled(customer);

        } else if (*pregnant == "true") {

            Customer* customer = new Pregnant(*name,*rut,*age);
            listCustomer.addPregnant(customer);

        } else {

            Customer* customer = new Customer(*name,*rut,*age);
            listCustomer.addCustomer(customer);


        }

        parts.clear();

    }

    delete part;
    delete name;
    delete age;
    delete rut;
    delete disabled;
    delete pregnant;

}

int SystemPharmacy::prueba(){

    HashMap hashMap(5);
    Product* product1 = new ProductCare("Product 1", "001", "SubCategory A", "Type X", 100, 10);
    Product* product2 = new ProductCare("Product 2", "002", "SubCategory B", "Type Y", 200, 20);
    
    hashMap.insert(product1->getId(), product1);
    hashMap.insert(product2->getId(), product2);

    cout << "Total de productos: " << hashMap.getSize() << endl;

    return hashMap.getSize();
}
