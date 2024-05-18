#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(Product* product) {

    this->product = product;
    this->next = NULL;
}

Node* Node::getNext() {

    return this->next;

}

Node* Node::setNext(Node* node) {

    this->next = node;

}