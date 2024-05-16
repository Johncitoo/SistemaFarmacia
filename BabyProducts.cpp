#include <iostream>
#include "BabyProducts.h"
#pragma once

using namespace std;

BabyProducts::BabyProducts(string name,string id,int price) : Product(name, id, price) {
    this->name = name;
    this->id = id;
    this->price = price;

}

BabyProducts::~BabyProducts() {
}