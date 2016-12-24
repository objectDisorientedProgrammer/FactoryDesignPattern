/*
 * Powerplant.cpp
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#include "Powerplant.h"

Powerplant::Powerplant()
{
    this->squareFeet = 3460;
}

Powerplant::~Powerplant()
{
    delete this;
}

int Powerplant::getSquareFeet()
{
    return this->squareFeet;
}
