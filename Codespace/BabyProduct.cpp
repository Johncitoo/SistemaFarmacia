#include "BabyProduct.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for the BabyProduct class that initializes its attributes using
 * the provided parameters.
 * 
 * @param name The `name` parameter in the `BabyProduct` constructor is a string that represents the
 * name of the baby product.
 * @param id The `id` parameter in the `BabyProduct` constructor is a string that represents the unique
 * identifier for the baby product.
 * @param subCategory The `subCategory` parameter in the `BabyProduct` constructor likely refers to a
 * specific category or subcategory within the broader category of baby products. It could be used to
 * further classify or categorize the baby product within a specific group, such as "diapers,"
 * "clothing," "to
 * @param type The "type" parameter in the constructor for the BabyProduct class is likely used to
 * specify the type of baby product being created, such as "diapers", "clothing", "toys", etc. It helps
 * to categorize the product within the broader category of baby products.
 * @param price The "price" parameter in the constructor for the BabyProduct class is of type "int",
 * which means it expects an integer value representing the price of the baby product.
 * @param numProducts The `numProducts` parameter in the `BabyProduct` constructor represents the
 * quantity or number of products available for that specific baby product.
 * @param category The `category` parameter in the `BabyProduct` constructor is used to specify the
 * category of the baby product. It is passed as an argument when creating a new instance of the
 * `BabyProduct` class.
 */
BabyProduct::BabyProduct(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

/**
 * The above function is a destructor for the BabyProduct class in C++.
 */
BabyProduct::~BabyProduct(){}