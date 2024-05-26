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

    public:

    Product(string,string,string,string,int,int);
    ~Product();
    void subtractProduct();

    // Getters
    string getName() const;
    string getId() const;
    string getSubCategory() const;
    string getType() const;
    int getPrice() const;
    int getNumProducts() const;

    // Setters
    void setName(const string& name);
    void setId(const string& id);
    void setSubCategory(const string& subCategory);
    void setType(const string& type);
    void setPrice(int price);
    void setNumProducts(int numProducts);

};
