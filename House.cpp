/*
	House.cpp
	Created September 28, 2013
	Author: Douglas Chidester
*/

#include "House.h"

House::House()
{
	this->squareFeet = 1475;
}

House::~House()
{
	delete this;
}

int House::getSquareFeet()
{
	return this->squareFeet;
}
