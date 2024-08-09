#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include <iostream>
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory
{
    public:
        Soldiers* createUnit() override;
        int calculateTotalHealthPerUnit(Soldiers* unit);
        int calculateTotalDamagePerUnit(Soldiers* unit);
        int calculateTotalDefencePerUnit(Soldiers* unit);                  
};

#endif