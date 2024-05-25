#include <iostream>
#include "BabyProducts.h"
#pragma once

using namespace std;

BabyProducts::BabyProducts(string name,string id,string subCategory, string type,int price,int numProducts) : Product(name, id, subCategory, type, price, numProducts) {}

BabyProducts::~BabyProducts() {
}