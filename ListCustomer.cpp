#include "ListCustomer.h"
#include <iostream>
#include <queue>

using namespace std;

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
}
