#include "Customer.h"
#include <iostream>

using namespace std;

/**
 * The Customer constructor in C++ initializes the member variables with the provided parameters.
 * 
 * @param name The "name" parameter in the Customer constructor is a string that represents the name of
 * the customer. It is used to store the name of the customer object being created.
 * @param rut The "rut" parameter in the Customer constructor likely refers to the unique
 * identification number assigned to individuals in some countries, such as Chile. It stands for "Rol
 * Único Tributario" and is used for tax and identification purposes.
 * @param age The `age` parameter in the `Customer` constructor represents the age of the customer. It
 * is an integer value that indicates how old the customer is.
 * @param ifDisable The `ifDisable` parameter in the `Customer` constructor seems to be a flag
 * indicating whether the customer has a disability or not. It is likely a string parameter that can
 * hold values like "yes" or "no", "true" or "false", or any other indicator of disability status.
 * @param ifPregnant The `ifPregnant` parameter in the `Customer` constructor likely represents whether
 * the customer is pregnant or not. It seems to be a string parameter that could hold values like "yes"
 * or "no" to indicate the pregnancy status of the customer.
 */
Customer::Customer(string name,string rut,int age,string ifDisable,string ifPregnant) {

    this->name = name;
    this->rut = rut;
    this->age = age;
    this->ifDisable = ifDisable;
    this->ifPregnant = ifPregnant;
    
}

/**
 * The above function is a destructor for the Customer class in C++.
 */
Customer::~Customer(){}

/**
 * The function `getName` in the `Customer` class returns the name of the customer.
 * 
 * @return The `name` attribute of the `Customer` class is being returned.
 */
string Customer::getName() { 
    return name; 
}

/**
 * The function `getRut` in the `Customer` class returns the `rut` member variable.
 * 
 * @return The `rut` member variable of the `Customer` class is being returned as a string.
 */
string Customer::getRut(){
    return rut;
}
    
/**
 * This function returns the age of a customer.
 * 
 * @return The `age` member variable of the `Customer` class is being returned.
 */
int Customer::getAge(){
    return age;
}

/**
 * The function `getIfDisable` returns the value of the `ifDisable` attribute for a Customer object.
 * 
 * @return The `ifDisable` variable of the `Customer` class is being returned as a string.
 */
string Customer::getIfDisable(){
    return ifDisable;
}
    
/**
 * The function `getIfPregnant` in the `Customer` class returns the value of the `ifPregnant`
 * attribute.
 * 
 * @return The `ifPregnant` variable of type `string` is being returned from the `getIfPregnant`
 * method.
 */
string Customer::getIfPregnant(){
    return ifPregnant;
}