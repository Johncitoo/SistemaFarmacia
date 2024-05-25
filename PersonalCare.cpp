#include <iostream>
#include "PersonalCare.h"
#pragma once

using namespace std;

/**
 * The `PersonalCare` constructor in C++ initializes a `Product` object with the provided name, id, and
 * price values.
 * 
 * @param name The "name" parameter in the code snippet refers to the name of the personal care product
 * being created. It is a string type parameter that is passed to the constructor of the PersonalCare
 * class.
 * @param id The "id" parameter in the code snippet refers to a unique identifier for the PersonalCare
 * product. It is used to distinguish one product from another and is typically a string or number that
 * is unique within the system or database.
 * @param price The `price` parameter in the `PersonalCare` constructor is used to initialize the
 * `price` attribute of the `Product` class, which `PersonalCare` inherits from. This parameter
 * represents the price of the personal care product being created.
 */
PersonalCare::PersonalCare(string name,string id,string subCategory, string type,int price,int numProducts) : Product(name, id, subCategory, type, price, numProducts) {}

/**
 * The above function is a destructor for the PersonalCare class in C++.
 */
PersonalCare::~PersonalCare() {
}