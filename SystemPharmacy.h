#pragma once

#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Inclusion of father classes
#include "Customer.cpp"
#include "Product.cpp"


// Inclusion of "Product" classes
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

class SystemPharmacy {

    private:

    ListCustomer listCustomer;
    //ListNodes listProduct;

    public:

    // Read files

    void readCustomer(ListCustomer&);
    //void readProduct(ListNodes&);

    SystemPharmacy();
    ~SystemPharmacy();

    

    // MENU

    void menu(ListCustomer,ListNodes);

};