#include "HashNode.h"
#include <iostream>

using namespace std;

/**
 * The HashNode constructor initializes a HashNode object with a key and a pointer to a Product object.
 * 
 * @param key The `key` parameter in the `HashNode` constructor is a string that represents the key
 * used for hashing in a hash table. It is used to uniquely identify the node within the hash table.
 * @param product The `product` parameter in the `HashNode` constructor is a pointer to an object of
 * type `Product`. This pointer is used to store the product information associated with the
 * `HashNode`.
 */
HashNode::HashNode(string key, Product* product){
    this->key = key;
    this->product= product;
    this->next= NULL;

}

/**
 * The `getKey` function in the `HashNode` class returns the key associated with the node.
 * 
 * @return The `key` attribute of the `HashNode` object is being returned as a string.
 */
string HashNode::getKey(){
    return key;

}

/**
 * The `getProduct` function in the `HashNode` class returns the product stored in the node.
 * 
 * @return The `getProduct` method is returning a pointer to a `Product` object.
 */
Product* HashNode::getProduct(){
    return product;
}

/**
 * The function `setProduct` in the `HashNode` class sets the product pointer to the provided product
 * object.
 * 
 * @param product The `product` parameter is a pointer to an object of type `Product`.
 */
void HashNode::setProduct(Product* product){
    this->product = product;
}

/**
 * The getNext function in the HashNode class returns the next HashNode in a linked list.
 * 
 * @return The `next` pointer of the `HashNode` object is being returned.
 */
HashNode* HashNode::getNext(){
    return next;
}

/**
 * The function `setNext` in the `HashNode` class sets the next pointer to the given `HashNode` object.
 * 
 * @param next Next is a pointer to the next HashNode in a linked list.
 */
void HashNode::setNext(HashNode *next){
    this->next = next;
}

/**
 * The above function is a destructor for the HashNode class in C++.
 */
HashNode::~HashNode(){}