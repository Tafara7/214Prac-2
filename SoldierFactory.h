#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H
#include <iostream>
#include "Soldiers.h"

class SoldierFactory
{
    private:
        Soldiers* soldier;

    protected:
        virtual Soldiers* createUnit() = 0;
        virtual int calculateTotalHealthPerUnit(Soldiers* unit);
        virtual int calculateTotalDamagePerUnit(Soldiers* unit);
        virtual int calculateTotalDefencePerUnit(Soldiers* unit);  

    public:
        Soldiers* getUnit();
        int getHealth(Soldiers* unit);
        int getDamage(Soldiers* unit);
        int getDefence(Soldiers* unit);
       
};

#endif


