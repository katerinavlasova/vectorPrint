#pragma once
#include "vectors.h"

struct Node {
    baseVector* vector;
    Node* nextNode;
    Node(baseVector* newVector = nullptr, Node* node = nullptr) : vector(newVector), nextNode(node) {};
    double getLenght() { return vector->length(); }
};

class list {
private:
    Node *node;

public:
    list(baseVector* newVector);
    ~list();

    Node* getNode();
    int addVector(baseVector* newVector);
    void printLengths();
};