#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H
#include <iostream>
#include "SoldierFactory.h"

class ShieldBearerFactory : public SoldierFactory
{
    public:
        Soldiers* createUnit() override;
        int calculateTotalHealthPerUnit(Soldiers* unit);
        int calculateTotalDamagePerUnit(Soldiers* unit);
        int calculateTotalDefencePerUnit(Soldiers* unit);  
};

#endif