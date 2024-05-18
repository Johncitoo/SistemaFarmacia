#include <iostream>
#include "ListNodes.h"

using namespace std;

ListNodes::ListNodes() {
    this->head = NULL;
}

void ListNodes::add(Node* node) {

    if (this->head == NULL)
    {
        this->head = node;

    } else {

        Node* aux = this->head;

        while (aux->getNext() != NULL) {
            aux = aux->getNext();
        }
        aux->setNext(node);
    

    }
    

}