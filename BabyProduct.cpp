#include "BabyProduct.h"
#include <iostream>

using namespace std;

BabyProduct::BabyProduct(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

BabyProduct::~BabyProduct(){}