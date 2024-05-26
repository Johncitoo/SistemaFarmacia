#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string name,string rut,int age,string ifDisable,string ifPregnant) {

    this->name = name;
    this->rut = rut;
    this->age = age;
    this->ifDisable = ifDisable;
    this->ifPregnant = ifPregnant;
    
}

Customer::~Customer(){}

string Customer::getName() { 
    return name; 
}

string Customer::getRut(){
    return rut;
}
    
int Customer::getAge(){
    return age;
}

string Customer::getIfDisable(){
    return ifDisable;
}
    
string Customer::getIfPregnant(){
    return ifPregnant;
}