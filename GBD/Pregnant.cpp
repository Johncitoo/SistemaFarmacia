#include "Pregnant.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for a class named Pregnant that inherits from the Customer class
 * and initializes its attributes.
 * 
 * @param name The `name` parameter is a string that represents the name of the customer.
 * @param rut The "rut" parameter in the code snippet you provided is likely a unique identifier for
 * the customer. It is being passed as a parameter to the constructor of the "Pregnant" class, which
 * seems to be inheriting from a "Customer" class. The "rut" parameter is probably used
 * @param age The "age" parameter in the constructor is used to specify the age of the customer being
 * created.
 * @param ifDisable The `ifDisable` parameter in the `Pregnant` constructor appears to be a string
 * parameter that is used to indicate whether the customer has any disabilities or not. It is likely a
 * flag or indicator that specifies if the customer has any disabilities that may need to be taken into
 * consideration.
 * @param ifPregnant The parameter `ifPregnant` in the constructor `Pregnant::Pregnant` is likely a
 * boolean or a string that indicates whether the customer is pregnant or not. It could be a flag that
 * is set to true if the customer is pregnant and false if they are not pregnant.
 */
Pregnant::Pregnant(string name,string rut,int age,string ifDisable,string ifPregnant) : Customer(name,rut,age,ifDisable,ifPregnant) {}

/**
 * The above function is a destructor for a class named "Pregnant" in C++.
 */
Pregnant::~Pregnant(){}