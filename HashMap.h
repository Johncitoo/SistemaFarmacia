#pragma once
#include <vector>
#include "HashNode.cpp"

using namespace std;

class HashMap {
    
    private:

    vector<HashNode*> table;
    int capacity;
    int size;

    void resize();

    public:

    HashMap(int size);
    ~HashMap();
    int hash(string key);
    void insert(string key, Product* product);
    Product* search(string key);
    int getSize();

};


