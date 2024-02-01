/*
    Main.cpp
    Created September 28, 2013
    Author: Douglas Chidester

    First attempt at using the factory pattern.
*/

#include "Main.h"
#include <memory>

int main(int argc, char *argv[])
{
    BuildingFactory b;

    for (int i = 0; i < static_cast<int>(eBuildingSize); ++i)
    {
        std::unique_ptr<Building> bldng{b.createBuilding(static_cast<Building_t>(i))};
        cout << "Creating a " << bldng->getSquareFeet() << " square foot " << bldng->getName() << ".\n";
    }
    return 0;
}
