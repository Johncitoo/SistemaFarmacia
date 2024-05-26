#include "Product.h"
#include <iostream>

using namespace std;

/**
 * The function `Product::Product` initializes the attributes of a product object with the provided
 * parameters.
 * 
 * @param name The `name` parameter in the `Product` constructor represents the name of the product. It
 * is a string that holds the name of the product being created.
 * @param id The `id` parameter in the `Product` constructor is a string that represents the unique
 * identifier of the product. It is used to distinguish one product from another in the system.
 * @param subCategory SubCategory is a string parameter that represents the sub-category of a product.
 * It helps to further classify and organize products within a specific category.
 * @param type The "type" parameter in the Product constructor likely refers to the type or category of
 * the product. It could be used to classify products into different groups such as electronics,
 * clothing, food, etc. This parameter helps in organizing and managing products within the system
 * based on their type.
 * @param price The `price` parameter in the `Product` constructor represents the price of the product.
 * It is an integer value that indicates the cost of the product in the specified currency.
 * @param numProducts The `numProducts` parameter in the `Product` constructor represents the number of
 * products available for that particular product. It indicates the quantity or stock level of that
 * product.
 * @param category The `category` parameter in the `Product` constructor represents the category to
 * which the product belongs. It is a string that specifies the broader category or classification of
 * the product.
 */
Product::Product(string name,string id,string subCategory,string type,int price,int numProducts,string category) {

    this->name = name;
    this->id = id;
    this->subCategory = subCategory;
    this->type = type;
    this->price = price;
    this->numProducts = numProducts;
    this->category= category;
    
}

/**
 * The above function is a destructor for the Product class in C++.
 */
Product::~Product() {
}


/**
 * The function subtracts one from the number of products.
 */
void Product::subtractProduct() { 
    this->numProducts = numProducts - 1;

}

// Getters


/**
 * This function returns the name of a product.
 * 
 * @return The `name` member variable of the `Product` class is being returned.
 */
string Product::getName() const {
    return name;
}

/**
 * This function returns the id of a Product object.
 * 
 * @return The `id` member variable of the `Product` class is being returned as a string.
 */
string Product::getId() const {
    return id;
}

/**
 * This function returns the subcategory of a product.
 * 
 * @return The `subCategory` member variable of the `Product` class is being returned.
 */
string Product::getSubCategory() const {
    return subCategory;
}

/**
 * The function `getType` returns the type of the product.
 * 
 * @return The `getType` function is returning a `string` value, specifically the `type` member
 * variable of the `Product` class.
 */
string Product::getType() const {
    return type;
}

/**
 * This function returns the price of a product.
 * 
 * @return The `price` member variable of the `Product` class is being returned.
 */
int Product::getPrice() const {
    return price;
}

/**
 * This function returns the number of products.
 * 
 * @return The function `getNumProducts` is returning the value of the member variable `numProducts`
 * from the `Product` class.
 */
int Product::getNumProducts() const {
    return numProducts;
}

/**
 * This function returns the category of the product.
 * 
 * @return The `getCategory` function is returning the `category` attribute of the `Product` class,
 * which is a string representing the category of the product.
 */
string Product::getCategory() const{
    return category;
}

// Setters


/**
 * The function `setName` sets the name of a product.
 * 
 * @param name The `setName` function in the `Product` class takes a `const string&` parameter named
 * `name`, which represents the new name that will be assigned to the product.
 */
void Product::setName(const string& name) {
    this->name = name;
}

/**
 * The function `setId` sets the `id` member variable of a `Product` object to the provided string.
 * 
 * @param id The `id` parameter is a reference to a constant string.
 */
void Product::setId(const string& id) {
    this->id = id;
}

/**
 * The function `setSubCategory` in C++ sets the subCategory of a Product object.
 * 
 * @param subCategory The `setSubCategory` function in the `Product` class takes a `const string&`
 * parameter named `subCategory`, which represents the sub-category of the product.
 */
void Product::setSubCategory(const string& subCategory) {
    this->subCategory = subCategory;
}

/**
 * The function `setType` sets the type of a product.
 * 
 * @param type The `type` parameter in the `setType` function is a constant reference to a string.
 */
void Product::setType(const string& type) {
    this->type = type;
}

/**
 * The function sets the price of a product.
 * 
 * @param price The `price` parameter in the `setPrice` function is an integer value that represents
 * the new price to be set for the product.
 */
void Product::setPrice(int price) {
    this->price = price;
}

/**
 * The function `setNumProducts` sets the number of products for a given `Product` object.
 * 
 * @param numProducts The `numProducts` parameter represents the number of products to be set for the
 * `Product` object.
 */
void Product::setNumProducts(int numProducts) {
    this->numProducts = numProducts;
}

/**
 * The function sets the category of a product.
 * 
 * @param category The `setCategory` function in the `Product` class is used to set the category of a
 * product. The `category` parameter is a string that represents the category to be assigned to the
 * product.
 */
void Product::setCategory(string category){
    this->category= category;
}