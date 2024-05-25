#include <iostream>
#include "Medicines.h"
#pragma once

using namespace std;

Medicines::Medicines(string name,string id,string subCategory, string type,int price,int numProducts) : Product(name, id, subCategory, type, price, numProducts) {}

Medicines::~Medicines(){}