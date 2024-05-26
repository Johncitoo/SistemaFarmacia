#pragma once

#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

// Father class

#include "Customer.cpp"
#include "Product.cpp"
#include "HashMap.cpp"

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


using namespace std;


class SystemPharmacy {

    private:

    ListCustomer listCustomer;
    HashMap hashmap;

    void saveCustomer(ListCustomer&);
    void saveProduct(HashMap);
    void nextCustomer(ListCustomer&,HashMap&);
    void newCustomer(ListCustomer&);
    void productSearchMenu(HashMap& hashmap);
    void printAllProducts(HashMap&);
    void addProductToHashMap(HashMap&);

    public:

    SystemPharmacy();
    void menu();
    

};