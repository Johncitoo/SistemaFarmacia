#include "SystemPharmacy.h"
#include <iostream>

using namespace std;

SystemPharmacy::SystemPharmacy(int size) : hashMap(size){

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
