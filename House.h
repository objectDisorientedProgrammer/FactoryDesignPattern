/*
    House.h
    Created September 28, 2013
    Author: Douglas Chidester
*/

#ifndef HOUSE_H
#define HOUSE_H

#include "Building.h"

class House : public Building
{
public:
    House();
    ~House();
    int getSquareFeet();
};

#endif
