// vectorsPrint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class baseVector {
public:
    baseVector() {};
    virtual ~baseVector() {};
    virtual double length() { return 0;  };
};

class twoDimensionalVector : public baseVector {
private:
    double x1;
    double x2;
public:
    twoDimensionalVector(double value1, double value2) 
    { 
        x1 = value1;
        x2 = value2;
    };
    ~twoDimensionalVector() {};
    virtual double length() override
    {
        return sqrt((pow(x1, 2) + pow(x2, 2)));
    };
};

class threeDimensionalVector : public baseVector {
private:
    double x1;
    double x2;
    double x3;
public:
    threeDimensionalVector(double value1, double value2, double value3)
    {
        x1 = value1;
        x2 = value2;
        x3 = value3;
    }

    ~threeDimensionalVector() {};

    virtual double length() override
    {
        return sqrt((pow(x1, 2) + pow(x2, 2) + pow(x3, 2)));
    };
};

class Node {
private:
    baseVector *headVector;
    Node *nextNode;
public:
    Node() { headVector = nullptr; nextNode = nullptr; };
    Node(baseVector *newVector) { headVector = newVector; nextNode = nullptr; };

    baseVector* getCurrentVector()
    {
        return headVector;
    }

    Node* addNode(baseVector *newVector)
    {
        if (headVector == nullptr)
        {
            headVector = new baseVector;
            headVector = newVector;
            cout << headVector->length() << " ";
            return this;
        }
        Node *currentNode = this;
        while (currentNode->nextNode != nullptr)
        {
            currentNode = currentNode->nextNode;
        }
        Node *newNode = new Node(newVector);
        currentNode->nextNode = newNode;
        cout << newNode->getCurrentVector()->length() << " ";
        return this;
    }

    void printNodes()
    {
        Node *currentNode = this;
        while (currentNode != nullptr)
        {
            cout << currentNode->getCurrentVector()->length() << " ";
            currentNode = currentNode->nextNode;
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
    Node *newnode = new Node();
    twoDimensionalVector vec(3, 4);
    twoDimensionalVector vec2(1, 1);
    threeDimensionalVector vec3(1, 1, 2);
    newnode->addNode(&vec);
    newnode->addNode(&vec2);
    newnode->addNode(&vec3);
    cout << endl;

    newnode->printNodes();
    //cout << newnode->getCurrentVector()->length();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
