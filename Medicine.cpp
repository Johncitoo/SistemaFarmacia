#include "Medicine.h"
#include <iostream>

using namespace std;

Medicine::Medicine(string name,string id,string subCategory,string type,int price,int numProducts) : Product(name,id,subCategory,type,price,numProducts) {}

Medicine::~Medicine(){}