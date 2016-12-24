/*
 * BuildingFactory.cpp
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#include "BuildingFactory.h"

BuildingFactory::BuildingFactory() {}

BuildingFactory::~BuildingFactory()
{
    delete this;
}

Building* BuildingFactory::createBuilding(char code)
{
	switch(code)
	{
		case 'h': return new House;
		case 'p': return new Powerplant;
		case 's': return new Skyscraper;
		default:
			return NULL;
	}
}
