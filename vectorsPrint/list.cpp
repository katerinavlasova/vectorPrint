#include "list.h"
#include <iostream>

list::list(baseVector* newVector)
{
    Node* newnode = new Node(newVector, nullptr);
    if (!newnode)
        return;
    node = newnode;
};

list::~list()
{
    Node* currentNode = getNode();
    while (currentNode != nullptr)
    {
        Node* tmp = currentNode;
        currentNode = currentNode->nextNode;
        delete tmp;
    }
}

Node* list::getNode()
{
    return this->node;
}

int list::addVector(baseVector* newVector)
{
    Node* newnode = new Node(newVector, nullptr);
    if (!newnode)
        return -1;
    Node* currentNode = getNode();
    while (currentNode->nextNode != nullptr)
    {
        currentNode = currentNode->nextNode;
    }
    currentNode->nextNode = newnode;
    return 0;
}

void list::printLengths()
{
    Node* currentNode = getNode();
    while (currentNode != nullptr)
    {
        std::cout << currentNode->getLenght() << " ";
        currentNode = currentNode->nextNode;
    }
    std::cout << std::endl;
}