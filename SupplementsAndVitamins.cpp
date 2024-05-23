#include <iostream>
#include "SupplementsAndVitamins.h"

using namespace std;

SupplementsAndVitamins::SupplementsAndVitamins(string name,string id,int price,int numProducts) : Product(name, id, price,numProducts) {}

SupplementsAndVitamins::~SupplementsAndVitamins() {
}