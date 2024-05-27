#pragma once

#include <iostream>

using namespace std;

class Customer {

    protected:

    string name;
    string rut;
    int age;
    string ifDisable;
    string ifPregnant;

    public:

    Customer(string,string,int,string,string);
    string getName();
    string getRut();
    int getAge();
    string getIfDisable();
    string getIfPregnant();

    virtual ~Customer();

};