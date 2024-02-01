/*
 * BuildingFactory.cpp
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#include "BuildingFactory.h"
#include <cstddef>

BuildingFactory::BuildingFactory() {}

BuildingFactory::~BuildingFactory()
{
}

Building* BuildingFactory::createBuilding(Building_t code)
{
	switch(code)
	{
		case eHouse: return new House;
		case ePowerPlant: return new Powerplant;
		case eSkyscraper: return new Skyscraper;
		default:
			return NULL;
	}
}
