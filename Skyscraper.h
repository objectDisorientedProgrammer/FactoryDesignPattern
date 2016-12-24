/*
 * Skyscraper.h
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#ifndef SKYSCRAPER_H_
#define SKYSCRAPER_H_

#include "Building.h"

class Skyscraper : public Building
{
public:
    Skyscraper();
    ~Skyscraper();
    int getSquareFeet();
};

#endif /* SKYSCRAPER_H_ */
