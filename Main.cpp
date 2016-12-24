/*
    Main.cpp
    Created September 28, 2013
    Author: Douglas Chidester

    First attempt at using the factory pattern.
*/

#include "Main.h"

int main()
{
    BuildingFactory b;

    // not sure if these b.createBuilding() calls are creating memory leaks or not...
    cout << "Making a house with " << b.createBuilding(eHouse)->getSquareFeet() << " square feet." << endl;
    cout << "Making a power plant with " << b.createBuilding(ePowerPlant)->getSquareFeet() << " square feet." << endl;
    cout << "Making a skyscraper with " << b.createBuilding(eSkyscraper)->getSquareFeet() << " square feet." << endl;
    return 0;
}
