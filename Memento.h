#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>

class Soldiers;

class Memento
{
    protected:
        int healthPerSolider;
        int damagePerSolider;
        int defencePerSolider;
        int amountOfSoldiersPerUnit;
        std::string unitName;
    public:
        Memento(int value1, int value2, int value3, int value4, std::string value5);
        
        int getHealthPerSolider() const;
        int getDamagePerSolider() const;
        int getDefencePerSolider() const;
        int getAmountOfSoldiersPerUnit() const;
        std::string getUnitName() const;

    friend class Soldiers;
};

#endif
