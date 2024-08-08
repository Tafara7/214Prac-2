#ifndef SOLDIERS_H
#define SOLDIERS_H
#include <iostream>
#include "Memento.h"

class SoldierFactory;

class Soldiers
{
    public:
        void engage();
        void disengage();
        Soldiers* clonis();
        Memento* militusMemento();
        void vivificaMemento(Memento* mem); 
    protected:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        std::string unitName;
    private:
        void prepare();
        void execute();
        void retreat();
        void rest();
    
        friend class SoldierFactory;
};

#endif
