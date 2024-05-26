#pragma once

#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Father class

#include "Customer.cpp"
#include "Product.cpp"

// Sons class Customer

#include "Disabled.cpp"
#include "Pregnant.cpp"
#include "ThirdAge.cpp"

// Sons class Product

#include "BabyProduct.cpp"
#include "MedEquipSupp.cpp"
#include "Medicine.cpp"
#include "ProductCare.cpp"
#include "SuppVit.cpp"

// Lists

#include "ListCustomer.cpp"

// HashMap
#include "HashMap.cpp"

using namespace std;


class SystemPharmacy {

    private:

    ListCustomer listCustomer;
    HashMap hashMap;

    public:

    SystemPharmacy(int size);
    void saveCustomer(ListCustomer&);

    int prueba();

};