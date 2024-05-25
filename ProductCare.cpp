#include "ProductCare.h"
#include <iostream>

using namespace std;

ProductCare::ProductCare(string name,string id,string subCategory,string type,int price,int numProducts) : Product(name,id,subCategory,type,price,numProducts) {}

ProductCare::~ProductCare(){}