/*
	Building.h
	Created September 28, 2013
	Author: Douglas Chidester

	Abstract base class.
*/

#ifndef BUILDING_H
#define BUILDING_H

using namespace std;
#include <iostream>

class Building
{
public:
	Building();
	virtual ~Building() = 0;
	virtual int getSquareFeet() = 0;
protected:
	int squareFeet;
};

#endif
