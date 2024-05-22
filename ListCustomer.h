#pragma once
#include <iostream>
#include <queue>

#include "Customer.cpp"
#include "ThirdAge.cpp"
#include "Disabled.cpp"
#include "Pregnant.cpp"

using namespace std;

class ListCustomer {

    private:

    queue<Customer*> listThirdAge;
    queue<Customer*> listDisabled;
    queue<Customer*> listPregnant;
    queue<Customer*> listCustomer;

    public:

    ListCustomer();
    void addThirdAge(Customer*);
    void addDisabled(Customer*);
    void addPregnant(Customer*);
    void addCustomer(Customer*);
    Customer* getCustomer();

};