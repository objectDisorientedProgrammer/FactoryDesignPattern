/*
    Building.cpp
    Created September 28, 2013
    Author: Douglas Chidester
*/

#include "Building.h"
#include <iostream>

Building::~Building()
{
    std::cout << "~Building()" << std::endl;
}

int Building::getSquareFeet()
{
    return squareFeet;
}

std::string Building::getName()
{
    return name;
}