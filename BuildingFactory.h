/*
 * BuildingFactory.h
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"
#include "House.h"
#include "Powerplant.h"
#include "Skyscraper.h"

class BuildingFactory
{
public:
	BuildingFactory();
	~BuildingFactory();
	Building* createBuilding(char);
};

#endif
