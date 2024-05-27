#include "ThirdAge.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for a class named `Pregnant` that inherits from the `Customer` class
 * and initializes its attributes.
 * 
 * @param name The `name` parameter is a string that represents the name of the customer.
 * @param rut The `rut` parameter is likely a unique identifier (such as a registration number) for the customer.
 *            It is being passed as a parameter to the constructor of the `Pregnant` class, which appears to
 *            be inheriting from a `Customer` class. The `rut` parameter is probably used to uniquely identify
 *            each customer.
 * @param age The `age` parameter in the constructor specifies the age of the customer being created.
 * @param ifDisable The `ifDisable` parameter in the `Pregnant` constructor appears to be a string parameter
 *                  that indicates whether the customer has any disabilities. It likely serves as a flag or
 *                  indicator to determine if the customer has specific needs related to their disability.
 * @param ifPregnant The `ifPregnant` parameter in the constructor `Pregnant::Pregnant` is likely a boolean
 *                   or a string that indicates whether the customer is pregnant. It could be a flag that is
 *                   set to true if the customer is pregnant and false if they are not pregnant.
 */

ThirdAge::ThirdAge(string name,string rut,int age,string ifDisable,string ifPregnant) : Customer(name,rut,age,ifDisable,ifPregnant) {}

/**
 * The above function is a destructor for a class named "Pregnant" in C++.
 */
ThirdAge::~ThirdAge(){}