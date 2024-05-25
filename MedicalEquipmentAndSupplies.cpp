#include <iostream>
#include "MedicalEquipmentAndSupplies.h"
#pragma once

using namespace std;

MedicalEquipmentAndSupplies::MedicalEquipmentAndSupplies(string name,string id,string subCategory, string type,int price,int numProducts) : Product(name, id, subCategory, type, price, numProducts) {}

MedicalEquipmentAndSupplies::~MedicalEquipmentAndSupplies() {
}