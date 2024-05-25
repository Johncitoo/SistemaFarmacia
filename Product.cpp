#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(string name,string id,string subCategory,string type,int proce,int numProducts) {

    this->name = name;
    this->id = id;
    this->subCategory = subCategory;
    this->type = type;
    this->price = price;
    this->numProducts = numProducts;
    
}

Product::~Product() {
}