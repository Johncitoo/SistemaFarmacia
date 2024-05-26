#pragma once

#include <iostream>

using namespace std;

class Product {
    
    protected:
    
    string name;
    string id;
    string subCategory;
    string type;

    int price;
    int numProducts;

    Product(string,string,string,string,int,int);
    virtual ~Product();

    public:
    string getName();
    string getId();
    string getSubCategory();
    string getType();
    int getPrice();
    int getNumProducts();

};