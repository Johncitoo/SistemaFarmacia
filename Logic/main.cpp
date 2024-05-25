#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Inclusion of "product" classes
#include "Product.cpp"
#include "Customer.cpp"

#include "BabyProducts.cpp"
#include "MedicalEquipmentAndSupplies.cpp"
#include "Medicines.cpp"
#include "PersonalCare.cpp"
#include "SupplementsAndVitamins.cpp"

// Inclusion of "customer" classes

#include "ThirdAge.cpp"
#include "Disabled.cpp"
#include "Pregnant.cpp"

// Inclusion of list
#include "ListCustomer.cpp"
#include "ListNodes.cpp"

using namespace std;

void readCustomer(ListCustomer listCustomer);
void readProduct(ListNodes listProduct);
void menu();

int main()
{

    ListCustomer listCustomer;
    ListNodes listProduct;

    readCustomer(listCustomer);
    readProduct(listProduct);

    menu();
    return 0;
}

void readCustomer(ListCustomer& listCustomer) {

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

            Customer* customer = new ThirdAge(*name,*age,*rut);
            listCustomer.addThirdAge(customer);

        } else if (*disabled == "true") {

            Customer* customer = new Disabled(*name,*age,*rut);
            listCustomer.addDisabled(customer);

        } else if (*pregnant == "true") {

            Customer* customer = new Pregnant(*name,*age,*rut);
            listCustomer.addPregnant(customer);

        } else {

            Customer* customer = new Customer(*name,*age,*rut);
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

void readProduct(ListNodes& listNodes) {

       // Opening the file
    ifstream arch("Products.txt");

    // File verification
    if (!arch.is_open()) {
        cout << "ERROR!!! NO SE ENCONTRO EL ARCHIVO" << endl;
        return;
    }

    string line;

    string* part;
    vector<string> parts;

    string* id;
    string* category;
    string* subCategory;
    string* type;
    string* name;
    int* price;
    int* numProducts;


    while (getline(arch, line)) {

        stringstream ss(line);
        
        while (getline(ss, *part, ';')) {

            parts.push_back(*part);

        }

        *id = parts[0];
        *category = parts[1];
        *subCategory = parts[2];
        *type = parts[3];
        *name = parts[4];
        *price = stof(parts[5]);
        *numProducts = stoi(parts[6]);
        
        if (*category == "medicine") {

            Product* product = new Medicines(*name, *id, *subCategory, *type, *price, *numProducts);
            

        } else if (*category == "babyproduct") {

            Product* product = new BabyProducts(*name, *id, *subCategory, *type, *price, *numProducts);

        } else if (*category == "medicalequipmentandsupplies") {

            Product* product = new MedicalEquipmentAndSupplies(*name, *id, *subCategory, *type, *price, *numProducts);

        } else if (*category == "personalcare") {

            Product* product = new MedicalEquipmentAndSupplies(*name, *id, *subCategory, *type, *price, *numProducts);

        } else if (*category == "supplementsandvitamins") {

            Product* product = new SupplementsAndVitamins(*name, *id, *subCategory, *type, *price, *numProducts);

        }  else {

            Product* product = new Product(*name, *id, *subCategory, *type, *price, *numProducts);
        }

    }

    delete part;
    delete id;
    delete category;
    delete subCategory;
    delete type;
    delete name;
    delete price;
    delete numProducts;

}