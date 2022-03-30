// vectorsPrint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "vectors.h"
#include "list.h"

using namespace std;


int main()
{
    std::cout << "Hello World!\n";
    ///list newnode = list();
    twoDimensionalVector vec(3, 4);
    list newnode = list(&vec);
    cout << endl;
    cout << endl;
    newnode.printLengths();
    twoDimensionalVector vec2(1, 1);
    threeDimensionalVector vec3(1, 1, 2);

    newnode.addVector(&vec2);
    newnode.addVector(&vec3);
    cout << endl;
    cout << endl;
    newnode.printLengths();

    cout << endl;
    cout << endl;
    newnode.printLengths();
    //newnode.addVector(vec);
//    newnode.addNode(&vec2);
//    newnode.addNode(&vec3);
    cout << endl;
    cout << endl;
    cout << endl;
    newnode.printLengths();
    //newnode.printNodes();
    //newnode.~list();
    //_CrtDumpMemoryLeaks();
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
