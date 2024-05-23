#pragma once
#include <iostream>
using namespace std;

class Customer {

    protected:

    string name;
    int age;
    string rut;

    public:

    Customer(string, int, string);
    virtual ~Customer();

};  