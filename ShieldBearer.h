#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include <iostream>
#include "Soldiers.h"

class ShieldBearer : public Soldiers
{
     private:
        int healthPerSolider;
        int damagePerSolider;
        int defencePerSolider;
        int amountOfSoldiersPerUnit;
        std::string unitName;
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
    public:
        void engage();
        void disengage();
        Soldiers* clonis();
        ShieldBearer();
         
};

#endif