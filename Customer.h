#include <iostream>
#pragma once
using namespace std;

class Customer {

    protected:

    string name;
    int age;

    public:

    Customer(string, int);
    virtual ~Customer();

};  