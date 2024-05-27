#include "ProductCare.h"
#include <iostream>

using namespace std;

/**
 * The function ProductCare is a constructor that initializes a ProductCare object with specified
 * attributes.
 * 
 * @param name The `name` parameter is a string that represents the name of the product care item.
 * @param id The `id` parameter is a string that serves as a unique identifier for the product care
 * item.
 * @param subCategory The `subCategory` parameter likely refers to a more specific category within
 * the broader category of product care items. It helps further classify or categorize the type of
 * product care being represented by the `ProductCare` class.
 * @param type The `type` parameter specifies the type of product care being created (e.g., "shampoo,"
 * "toothpaste," "lotion," etc.). It helps categorize the product care item within the broader
 * category.
 * @param price The `price` parameter represents the price of the product care item.
 * @param numProducts The `numProducts` parameter represents the quantity or number of product care
 * items available.
 * @param category The `category` parameter specifies the broader category of the product care item
 * (e.g., "personalcare").
 */
ProductCare::ProductCare(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

/**
 * The above function is a destructor for the ProductCare class in C++.
 */
ProductCare::~ProductCare(){}