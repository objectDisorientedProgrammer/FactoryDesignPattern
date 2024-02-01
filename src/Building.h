/*
    Building.h
    Created September 28, 2013
    Author: Douglas Chidester

    Abstract base class.
*/

#ifndef BUILDING_H
#define BUILDING_H

#include <string>

typedef enum
{
    eHouse = 0, ePowerPlant, eSkyscraper, eBuildingSize
} Building_t;

class Building
{
public:
    virtual ~Building() = 0;
    virtual int getSquareFeet();
    virtual std::string getName();
protected:
    int squareFeet;
    std::string name;
};

#endif
