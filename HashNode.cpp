#include "HashNode.h"
#include <iostream>

using namespace std;

HashNode::HashNode(string key, Product* product){
    this->key = key;
    this->product= product;
    this->next= NULL;

}

    string HashNode::getKey(){
        return key;

    }

    Product* HashNode::getProduct(){
        return product;
    }

    void HashNode::setProduct(Product* product){
        this->product = product;
    }

    HashNode* HashNode::getNext(){
        return next;
    }

    void HashNode::setNext(HashNode *next){
        this->next = next;
    }

    HashNode::~HashNode(){}