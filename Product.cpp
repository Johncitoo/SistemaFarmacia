#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string name, string id, int price) {
    this->name = name;
    this->id = id;
    this->price = price;
    
}

Product::~Product() {
}
