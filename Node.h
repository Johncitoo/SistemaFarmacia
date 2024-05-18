#include <iostream>
#include "Product.h"
using namespace std;

class Node {

    private:

    Product* product;
    Node* next;

    public:

    Node(Product* product);
    Node* getNext();
    Node* setNext(Node* node);

};