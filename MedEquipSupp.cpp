#include "MedEquipSupp.h"
#include <iostream>

using namespace std;

MedEquipSupp::MedEquipSupp(string name,string id,string subCategory,string type,int price,int numProducts) : Product(name,id,subCategory,type,price,numProducts) {}

MedEquipSupp::~MedEquipSupp(){}