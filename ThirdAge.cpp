#include <iostream>
#include "ThirdAge.h"

using namespace std;

ThirdAge::ThirdAge(string name,int age) : Customer(name,age) {

    this->name = name;
    this->age = age;
}

ThirdAge::~ThirdAge()
{
}
