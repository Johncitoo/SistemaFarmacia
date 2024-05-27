#include "Disabled.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for a class called Disabled that inherits from the Customer
 * class and initializes its attributes.
 * 
 * @param name The `Disabled` constructor you provided takes five parameters:
 * @param rut The "rut" parameter in the code snippet you provided seems to be a string variable
 * representing the customer's identification number or code. It is being passed as a parameter to the
 * constructor of a class named "Disabled" which inherits from a class named "Customer".
 * @param age The "age" parameter in the constructor is used to specify the age of the customer being
 * created.
 * @param ifDisable The `ifDisable` parameter in the `Disabled` constructor likely represents a
 * condition or flag indicating whether the customer is disabled. It is used to initialize the
 * `ifDisable` attribute of the `Customer` base class.
 * @param ifPregnant The parameter `ifPregnant` in the `Disabled` constructor appears to be a string
 * variable that is used to indicate whether the customer is pregnant or not. It is likely a flag or
 * indicator that can have values such as "yes", "no", "true", "false", or any
 */
Disabled::Disabled(string name,string rut,int age,string ifDisable,string ifPregnant) : Customer(name,rut,age,ifDisable,ifPregnant) {}

/**
 * The above function is a destructor for a class named Disabled in C++.
 */
Disabled::~Disabled(){}