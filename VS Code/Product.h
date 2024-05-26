#pragma once

#include <iostream>

using namespace std;

class Product {
    
    protected:
    
    string name;
    string id;
    string category;
    string subCategory;
    string type;

    int price;
    int numProducts;

    public:

    Product(string,string,string,string,int,int,string);
    ~Product();
    void subtractProduct();

    // Getters
    string getName() const;
    string getId() const;
    string getSubCategory() const;
    string getType() const;
    int getPrice() const;
    int getNumProducts() const;
    string getCategory()const;

    // Setters
    void setName(const string& name);
    void setId(const string& id);
    void setSubCategory(const string& subCategory);
    void setType(const string& type);
    void setPrice(int price);
    void setNumProducts(int numProducts);
    void setCategory(string category);
};
