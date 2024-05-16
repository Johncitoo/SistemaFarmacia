#include <iostream>
#include "Product.cpp"
#pragma once

using namespace std;

class BabyProducts : public Product {

    public:

    BabyProducts(string,string,int);
    ~BabyProducts();

};