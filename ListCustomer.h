#pragma once

#include <iostream>
#include <queue>

#include "Customer.h"
#include "ThirdAge.h"
#include "Disabled.h"
#include "Pregnant.h"

using namespace std;

class ListCustomer {

    private:

    queue<Customer*> listThirdAge;
    queue<Customer*> listDisabled;
    queue<Customer*> listPregnant;
    queue<Customer*> listCustomer;

    public:

    ListCustomer();

    // add Customer by type

    void addThirdAge(Customer*);
    void addDisabled(Customer*);
    void addPregnant(Customer*);
    void addCustomer(Customer*);
    Customer* getNextCustomer();
    queue<Customer*> getThirdAge();
    queue<Customer*> getDisabled();
    queue<Customer*> getPregnant();
    queue<Customer*> getListCustomer();
    
    
};