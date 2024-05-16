#include <iostream>
#include "Pregnant.h"

using namespace std;

Pregnant::Pregnant(string name, int age) : Customer(name,age) {

    this->name = name;
    this->age = age;

}

Pregnant::~Pregnant(){}
