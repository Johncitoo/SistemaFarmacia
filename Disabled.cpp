#include <iostream>
#include "Disabled.h"

using namespace std;

Disabled::Disabled(string name, int age) : Customer(name,age) {

    this->name = name;
    this->age = age;
}

Disabled::~Disabled(){}