#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string name, string id, string subCategory, string type, int price, int numProducts) {
    this->name = name;
    this->id = id;
    this->subCategory = subCategory;
    this->type = type;
    this->price = price;
    this->numProducts = numProducts;
}


Product::~Product() {
}
