#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string name,string rut,int age) {

    this->name = name;
    this->rut = rut;
    this->age = age;

}

Customer::~Customer(){}

string Customer::getName() { 
    return name; 
}