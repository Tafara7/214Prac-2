#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
#include "Soldiers.h"

class Infantry : public Soldiers
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
        Infantry();
};

#endif