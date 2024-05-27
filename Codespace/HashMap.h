#pragma once

#include <iostream>
#include <vector>
#include "HashNode.cpp"

using namespace std;

class HashMap {

    private:

    vector<HashNode*> table;
    int capacity = 200;

    public:

    HashMap();
    void resize();
    int hash(string key);
    void insert(string key, Product* product);
    Product* search(string key);
    int getSize();
    vector<Product*> getAllProducts();
    ~HashMap();

};

