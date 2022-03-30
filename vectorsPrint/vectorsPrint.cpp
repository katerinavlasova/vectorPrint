// vectorsPrint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "vectors.h"
#include "list.h"

using namespace std;


int main()
{
    twoDimensionalVector vec(3, 4);
    twoDimensionalVector vec2(1, 1);
    threeDimensionalVector vec3(1, 1, 2);

    list newnode = list(&vec);
    
    newnode.addVector(&vec2);
    newnode.addVector(&vec3);

    newnode.printLengths();
    return 0;
}