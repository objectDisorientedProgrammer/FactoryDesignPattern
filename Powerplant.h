/*
 * Powerplant.h
 *
 *  Created on: Sep 28, 2013
 *      Author: Douglas Chidester
 */

#ifndef POWERPLANT_H_
#define POWERPLANT_H_

#include "Building.h"

class Powerplant : public Building
{
public:
    Powerplant();
    ~Powerplant();
    int getSquareFeet();
};

#endif /* POWERPLANT_H_ */
