#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include <iostream>
#include "SoldierFactory.h"

class InfantryFactory : public SoldierFactory
{
    public:
        Soldiers* createInfantryUnit() {
            return createUnit();
        }
        int calculateTotalHealthPerUnit(Soldiers* unit);
        int calculateTotalDamagePerUnit(Soldiers* unit);
        int calculateTotalDefencePerUnit(Soldiers* unit);          

    protected:
        Soldiers* createUnit() override;
};

#endif