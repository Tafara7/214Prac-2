#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H
#include <iostream>
#include "SoldierFactory.h"

class BoatmanFactory : public SoldierFactory
{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit(Soldiers* unit);
        int calculateTotalDamagePerUnit(Soldiers* unit);
        int calculateTotalDefencePerUnit(Soldiers* unit);  
};

#endif