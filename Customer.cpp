#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(string name, int age, string rut) {

    this->name = name;
    this->age = age;
    this->rut = rut;

}

Customer::~Customer() {}
