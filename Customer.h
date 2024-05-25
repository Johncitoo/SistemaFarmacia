#pragma once

#include <iostream>

using namespace std;

class Customer {

    protected:

    string name;
    string rut;
    int age;

    public:

    Customer(string,string,int);
    virtual ~Customer();

};