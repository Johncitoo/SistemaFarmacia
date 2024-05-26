#include "SuppVit.h"
#include <iostream>

using namespace std;

SuppVit::SuppVit(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

SuppVit::~SuppVit(){}