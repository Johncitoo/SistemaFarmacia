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

string Product::getName() {
    return name;
}

string Product::getId() {
    return id;
}

string Product::getSubCategory() {
    return subCategory;
}

string Product::getType() {
    return type;
}

int Product::getPrice() {
    return price;
}

int Product::getNumProducts() {
    return numProducts;
}