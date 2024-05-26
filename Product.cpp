#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(string name,string id,string subCategory,string type,int price,int numProducts,string category) {

    this->name = name;
    this->id = id;
    this->subCategory = subCategory;
    this->type = type;
    this->price = price;
    this->numProducts = numProducts;
    this->category= category;
    
}

Product::~Product() {
}

void Product::subtractProduct() { 
    this->numProducts = numProducts - 1;
    cout << numProducts << endl;

}

// Getters
string Product::getName() const {
    return name;
}

string Product::getId() const {
    return id;
}

string Product::getSubCategory() const {
    return subCategory;
}

string Product::getType() const {
    return type;
}

int Product::getPrice() const {
    return price;
}

int Product::getNumProducts() const {
    return numProducts;
}

string Product::getCategory() const{
    return category;
}

// Setters
void Product::setName(const string& name) {
    this->name = name;
}

void Product::setId(const string& id) {
    this->id = id;
}

void Product::setSubCategory(const string& subCategory) {
    this->subCategory = subCategory;
}

void Product::setType(const string& type) {
    this->type = type;
}

void Product::setPrice(int price) {
    this->price = price;
}

void Product::setNumProducts(int numProducts) {
    this->numProducts = numProducts;
}

void Product::setCategory(string category){
    this->category= category;
}