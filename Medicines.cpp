#include <iostream>
#include "Medicines.h"
#pragma once

using namespace std;

Medicines::Medicines(string name,string id,int price): Product(name, id, price) {
    this->name = name;
    this->id = id;
    this->price = price;

}