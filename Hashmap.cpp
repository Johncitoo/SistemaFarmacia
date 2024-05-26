
#include "HashMap.h"
#include <iostream>

using namespace std;

HashMap::HashMap(){

    table.resize(capacity,nullptr);
}

void HashMap::resize(){
    int oldCapacity = capacity;
    capacity *= 2;
    vector<HashNode*> newTable(capacity,NULL);

    for(int i = 0; i < oldCapacity;i++){
        HashNode* entry = table[i];
        while (entry != NULL){
            HashNode* next = entry->getNext();
            int hashIndex = hash(entry->getKey());
            entry->setNext(newTable[hashIndex]);
            newTable[hashIndex] = entry;
            entry = next;
        }
        
    }
    
    table = newTable;
}

HashMap::~HashMap(){

    for(HashNode *node:table){

        while (node!= NULL)
        {
            HashNode* temp = node;
            node = node->getNext();
            delete temp;
        }
        
    }

}

int HashMap::hash(string key) {
    int hashValue = 0;
    for (char ch : key) {
        hashValue = (hashValue * 31 + ch) % capacity;
    }
    return hashValue;
}


void HashMap::insert(string key, Product* product) {

    int hashIndex = hash(key);
    
    HashNode* prev = nullptr;

    HashNode* entry = table[hashIndex];

    

    while (entry != nullptr && entry->getKey() != key) {
        prev = entry;
        entry = entry->getNext();
    }

    if (entry == nullptr) {

        entry = new HashNode(key, product);

        if (prev == nullptr) {
            table[hashIndex] = entry;
        } else {
            prev->setNext(entry);
        }

    } else {

        entry->setProduct(product);

    }

}

Product* HashMap::search(string key) {

    int hashIndex = hash(key);
    
    HashNode* entry = table[hashIndex];

    while (entry != nullptr) {
        if (entry->getKey() == key) {

            return entry->getProduct();
        }
        entry = entry->getNext();
    }

    return nullptr;
}

vector<Product*> HashMap::getAllProducts() {
    vector<Product*> allProducts;

    for (HashNode* node : table) {
        while (node != nullptr) {
            allProducts.push_back(node->getProduct());
            node = node->getNext();
        }
    }

    return allProducts;
}

