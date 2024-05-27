#include "SuppVit.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for the `SuppVit` class that initializes its attributes using
 * the provided parameters.
 * 
 * @param name The `name` parameter in the `SuppVit` constructor represents the name of the
 * supplement or vitamin product.
 * @param id The `id` parameter in the `SuppVit` constructor is a unique identifier for the
 * supplement or vitamin product.
 * @param subCategory The `subCategory` parameter in the `SuppVit` constructor likely refers to a
 * specific subcategory within the broader category of supplements and vitamins. It helps further
 * classify or categorize the product.
 * @param type The `type` parameter in the `SuppVit` constructor specifies the type of supplement or
 * vitamin being created (e.g., "capsule," "tablet," "softgel," etc.).
 * @param price The `price` parameter in the `SuppVit` constructor is an integer representing the
 * price of the supplement or vitamin product.
 * @param numProducts The `numProducts` parameter in the `SuppVit` constructor represents the
 * quantity or number of products available for that specific supplement or vitamin.
 * @param category The `category` parameter in the `SuppVit` constructor specifies the broader
 * category of the product (e.g., "supplementandvitamins").
 */
SuppVit::SuppVit(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

/**
 * The above function is a destructor for the SuppVit class in C++.
 */
SuppVit::~SuppVit(){}