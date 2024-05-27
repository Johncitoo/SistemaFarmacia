
#include "HashMap.h"
#include <iostream>

using namespace std;

/**
 * The HashMap constructor in C++ initializes the table with a specified capacity and sets all elements
 * to nullptr.
 */
HashMap::HashMap(){

    table.resize(capacity,nullptr);
}


/**
 * The resize function in a HashMap class doubles the capacity of the hash table and rehashes the
 * existing elements into the new table.
 */
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

/**
 * The destructor for a HashMap class that iterates through each bucket in the table and deletes all
 * nodes in each bucket.
 */
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

/**
 * The hash function takes a string key and calculates a hash value using the formula (hashValue * 31 +
 * ch) % capacity for each character in the key.
 * 
 * @param key The `key` parameter in the `hash` function is a string representing the key for which you
 * want to calculate the hash value. The function iterates over each character in the key and
 * calculates a hash value based on the ASCII value of the characters and the current hash value.
 * 
 * @return The `hash` function is returning an integer value, which is the calculated hash value for
 * the given input key.
 */
int HashMap::hash(string key) {
    int hashValue = 0;
    for (char ch : key) {
        hashValue = (hashValue * 31 + ch) % capacity;
    }
    return hashValue;
}


/**
 * The insert function in a HashMap class inserts a key-value pair into the hash table, handling
 * collisions by chaining.
 * 
 * @param key The `key` parameter is a string that serves as the identifier for the product being
 * inserted into the HashMap.
 * @param product The `product` parameter in the `insert` function is a pointer to an object of type
 * `Product`. This object represents the product that you want to insert into the HashMap data
 * structure.
 */
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

/**
 * The `search` function in a C++ HashMap class searches for a product using a given key.
 * 
 * @param key The `key` parameter in the `search` function is a string that is used to search for a
 * specific entry in the `HashMap`. The function iterates through the hash table to find the entry with
 * the matching key and returns the associated product if found.
 * 
 * @return The `Product` associated with the given `key` is being returned if it is found in the
 * `HashMap`. If the `key` is not found, `nullptr` is returned.
 */
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

/**
 * The function `getAllProducts` iterates through a hash table and returns a vector of all products
 * stored in the table.
 * 
 * @return A vector of pointers to Product objects is being returned.
 */
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

