#include <iostream>
#include "MedicalEquipmentAndSupplies.h"
#pragma once

using namespace std;

MedicalEquipmentAndSupplies::MedicalEquipmentAndSupplies(string name,string id,int price) : Product(name, id, price) {
    this->name = name;
    this->id = id;
    this->price = price;

}

MedicalEquipmentAndSupplies::~MedicalEquipmentAndSupplies() {
}