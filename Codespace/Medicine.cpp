#include "Medicine.h"
#include <iostream>

using namespace std;

/**
 * The above function is a constructor for the Medicine class that initializes its attributes using the
 * provided parameters.
 * 
 * @param name The `name` parameter is a string that represents the name of the medicine being created.
 * @param id The "id" parameter in the constructor is used to initialize the unique identifier for the
 * Medicine object. It is a string type parameter that uniquely identifies each instance of the
 * Medicine class.
 * @param subCategory SubCategory is a parameter that specifies a more specific category or
 * classification within a broader category. In the context of the Medicine class constructor you
 * provided, the subCategory parameter would likely refer to a subcategory of medicine, such as "pain
 * relief," "antibiotics," "vitamins," etc.
 * @param type In the given code snippet, the "type" parameter is a string variable that is being
 * passed as an argument to the constructor of the "Medicine" class.
 * @param price The "price" parameter in the constructor for the Medicine class is of type "int" and
 * represents the price of the medicine product.
 * @param numProducts The `numProducts` parameter in the `Medicine` constructor represents the number
 * of medicine products available for that particular medicine.
 * @param category It seems like the `category` parameter is missing in the list of parameters provided
 * for the `Medicine` constructor. If you need assistance with the `category` parameter or have any
 * other questions, feel free to ask!
 */
Medicine::Medicine(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

/**
 * The above function is a destructor for the Medicine class in C++.
 */
Medicine::~Medicine(){}