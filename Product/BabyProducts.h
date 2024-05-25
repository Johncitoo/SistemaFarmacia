#include <iostream>
#include "Product.cpp"
#pragma once

using namespace std;

class BabyProducts : public Product {

    public:

    BabyProducts(string name,string id,string subCategory, string type,int price,int numProducts);
    ~BabyProducts();

};