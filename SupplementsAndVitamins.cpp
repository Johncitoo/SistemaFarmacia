#include <iostream>
#include "SupplementsAndVitamins.h"

using namespace std;

SupplementsAndVitamins::SupplementsAndVitamins(string name,string id,int price) : Product(name, id, price) {
    this->name = name;
    this->id = id;
    this->price = price;

}

SupplementsAndVitamins::~SupplementsAndVitamins() {
}