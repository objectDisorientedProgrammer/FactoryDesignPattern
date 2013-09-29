/*
 * Skyscraper.cpp
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#include "Skyscraper.h"

Skyscraper::Skyscraper()
{
	this->squareFeet = 9001;
}

Skyscraper::~Skyscraper()
{
	delete this;
}

int Skyscraper::getSquareFeet()
{
	return this->squareFeet;
}
