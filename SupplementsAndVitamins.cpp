#include <iostream>
#include "SupplementsAndVitamins.h"

using namespace std;

SupplementsAndVitamins::SupplementsAndVitamins(string name,string id,string subCategory, string type,int price,int numProducts) : Product(name, id, subCategory, type, price, numProducts) {}

SupplementsAndVitamins::~SupplementsAndVitamins() {
}