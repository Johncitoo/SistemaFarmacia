#include "MedEquipSupp.h"
#include <iostream>

using namespace std;

/**
 * The function MedEquipSupp is a constructor that initializes a MedEquipSupp object with specified
 * attributes.
 * 
 * @param name The `name` parameter is a string that represents the name of the medical equipment
 * supplier.
 * @param id The "id" parameter in the code snippet you provided is a string variable. It is being
 * passed as an argument to the constructor of the "MedEquipSupp" class.
 * @param subCategory The `subCategory` parameter in the `MedEquipSupp` constructor likely refers to a
 * more specific category within the broader category of medical equipment supplies. It could be used
 * to further classify the type of medical equipment being represented by the `MedEquipSupp` class.
 * @param type The `type` parameter in the `MedEquipSupp` constructor likely refers to the type of
 * medical equipment or supplies being represented by the object being created. It could be a specific
 * category or classification within the broader category of medical equipment and supplies.
 * @param price The `price` parameter in the `MedEquipSupp` constructor represents the price of the
 * medical equipment or supplies being created.
 * @param numProducts The `numProducts` parameter in the `MedEquipSupp` constructor represents the
 * number of products available for the medical equipment supplier. It specifies the quantity or stock
 * level of the particular medical equipment being supplied.
 * @param category The `category` parameter in the `MedEquipSupp` constructor likely refers to the
 * category of medical equipment supplies to which the product belongs. This parameter is used to
 * initialize the `category` attribute of the `Product` class, which is the base class for
 * `MedEquipSupp`.
 */
MedEquipSupp::MedEquipSupp(string name,string id,string subCategory,string type,int price,int numProducts,string category) : Product(name,id,subCategory,type,price,numProducts,category) {}

/**
 * The above function is a destructor for the MedEquipSupp class in C++.
 */
MedEquipSupp::~MedEquipSupp(){}