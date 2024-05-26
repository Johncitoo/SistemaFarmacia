#pragma once
#include <iostream>
#include "Product.h"

using namespace std;

class HashNode {

    private:

    string key;
    int value;
    Product* product;
    HashNode *next;

    public:

    HashNode(string key, Product* product);

    string getKey();

    Product* getProduct();

    void setProduct(Product* product);

    HashNode *getNext();

    void setNext(HashNode *next);

    ~HashNode();
};
