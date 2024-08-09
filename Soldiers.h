#ifndef SOLDIERS_H
#define SOLDIERS_H
#include <iostream>
#include "Memento.h"

class SoldierFactory;
class InfantryFactory;
class ShieldBearerFactory;
class BoatmanFactory;

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
        virtual void prepare() = 0;
        virtual void execute() = 0;
        virtual void retreat() = 0;
        virtual void rest() = 0;
    
        friend class SoldierFactory;
        friend class InfantryFactory;
        friend class ShieldBearerFactory;
        friend class BoatmanFactory;
};

#endif
