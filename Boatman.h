#ifndef BOATMAN_H
#define BOATMAN_H
#include <iostream>
#include "Soldiers.h"

class Boatman : public Soldiers
{
    private:
        int healthPerSolider;
        int damagePerSolider;
        int defencePerSolider;
        int amountOfSoldiersPerUnit;
        std::string unitName;
        void prepare();
        void execute();
        void retreat();
        void rest();
    public:
        void engage();
        void disengage();
        Soldiers* clonis();
        Boatman();

         
};

#endif