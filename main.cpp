#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Inclusion of "product" classes
#include "Product.cpp"
#include "BabyProducts.cpp"
#include "MedicalEquipmentAndSupplies.cpp"
#include "Medicines.cpp"
#include "PersonalCare.cpp"
#include "SupplementsAndVitamins.cpp"

// Inclusion of "customer" classes
#include "Customer.cpp"
#include "ThirdAge.cpp"
#include "Disabled.cpp"
#include "Pregnant.cpp"

// Inclusion of list
#include "ListCustomer.cpp"

using namespace std;

void readCustomer(ListCustomer listCustomer);
void menu();

int main()
{

    ListCustomer listCustomer;
    readCustomer(listCustomer);
    
    readProduct();

    manu();
    return 0;
}

void readCustomer(ListCustomer listCustomer) {

    // Opening the file
    ifstream arch("Customer.txt");

    // File verification
    if (!arch.is_open()) {
        cout << "ERROR!!! NO SE ENCONTRO EL ARCHIVO" << endl;
        return;
    }

    string line;

    string* part = new string;
    vector<string> parts;

    string name;
    int age;
    string rut;
    string disabled;
    string pregnant;

    while (getline(arch, line)) {

        stringstream ss(line);
        
        while (getline(ss, *part, ';')) {

            parts.push_back(*part);

        }

        name = parts[0];
        age = stoi(parts[1]);
        rut = parts[2];
        disabled = parts[3];
        pregnant = parts[4];



        if (age > 60) {

            Customer* customer = new ThirdAge(name,age,rut);
            listCustomer.addThirdAge(customer);

        } else if (disabled == "true") {

            Customer* customer = new Disabled(name,age,rut);
            listCustomer.addDisabled(customer);

        } else if (pregnant == "true") {

            Customer* customer = new Pregnant(name,age,rut);
            listCustomer.addPregnant(customer);

        } else {

            Customer* customer = new Customer(name,age,rut);
            listCustomer.addCustomer(customer);

        }

    }



}