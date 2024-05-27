#include "ListCustomer.h"
#include <iostream>
#include <queue>

using namespace std;

/**
 * The ListCustomer constructor in C++ is defined without any specific implementation.
 */
ListCustomer::ListCustomer() {

}


/**
 * The function `addThirdAge` adds a customer to a list of third-age customers in a C++ program.
 * 
 * @param customer Customer object to be added to the list of third age customers.
 */
void ListCustomer::addThirdAge(Customer* customer) {

    this->listThirdAge.push(customer);

}

/**
 * The function `addDisabled` adds a customer to a list of disabled customers in a C++ program.
 * 
 * @param customer The `customer` parameter is a pointer to a `Customer` object that you want to add to
 * the `listDisabled` container in the `ListCustomer` class.
 */
void ListCustomer::addDisabled(Customer* customer) {

    this->listDisabled.push(customer);
    
}

/**
 * The function `addPregnant` adds a customer to a list of pregnant customers in a C++ program.
 * 
 * @param customer The `customer` parameter is a pointer to an object of type `Customer`.
 */
void ListCustomer::addPregnant(Customer* customer) {
    
    this->listPregnant.push(customer);

}

/**
 * The function `addCustomer` adds a customer to a list of customers in C++.
 * 
 * @param customer The `customer` parameter is a pointer to an object of the `Customer` class.
 */
void ListCustomer::addCustomer(Customer* customer) {

    this->listCustomer.push(customer);
    
}

/**
 * This function returns the next customer based on priority from different lists of customers.
 * 
 * @return A pointer to the next customer in the priority order of third age customers, disabled
 * customers, pregnant customers, and regular customers. If there are no customers in any of these
 * lists, a nullptr is returned.
 */
Customer* ListCustomer::getNextCustomer() {

    if (!listThirdAge.empty()) {

        Customer* customer = listThirdAge.front();
        listThirdAge.pop();
        return customer;

    } else if (!listDisabled.empty()) {

        Customer* customer = listDisabled.front();
        listDisabled.pop();
        return customer;

    } else if (!listPregnant.empty()) {

        Customer* customer = listPregnant.front();
        listPregnant.pop();
        return customer;

    } else if (!listCustomer.empty()) {

        Customer* customer = listCustomer.front();
        listCustomer.pop();
        return customer;

    } 

    return nullptr;
}

/**
 * The function `getDisabled` returns a queue of pointers to Customer objects representing disabled
 * customers.
 * 
 * @return A queue of pointers to Customer objects that are disabled.
 */
queue<Customer*> ListCustomer::getDisabled(){
    return listDisabled;
}

/**
 * The function `getPregnant` returns a queue of pointers to Customer objects representing pregnant
 * customers.
 * 
 * @return A queue of pointers to Customer objects who are pregnant is being returned.
 */
queue<Customer*> ListCustomer::getPregnant(){
    return listPregnant;
}

/**
 * The function `getThirdAge` returns a queue of pointers to Customer objects representing third-age
 * customers.
 * 
 * @return A queue of pointers to Customer objects who are considered to be of the third age.
 */
queue<Customer*> ListCustomer::getThirdAge(){
    return listThirdAge;
}

/**
 * The function `getListCustomer` returns a queue of Customer pointers stored in the `listCustomer`
 * member variable of the `ListCustomer` class.
 * 
 * @return A queue of pointers to Customer objects is being returned.
 */
queue<Customer*> ListCustomer::getListCustomer(){
    return listCustomer;
}