#include "Memento.h"

Memento::Memento(int value1, int value2, int value3, int value4, std::string value5)
    : healthPerSolider(value1), damagePerSolider(value2), defencePerSolider(value3), amountOfSoldiersPerUnit(value4), unitName(value5) {}

int Memento::getHealthPerSolider() const { return healthPerSolider; }
int Memento::getDamagePerSolider() const { return damagePerSolider; }
int Memento::getDefencePerSolider() const { return defencePerSolider; }
int Memento::getAmountOfSoldiersPerUnit() const { return amountOfSoldiersPerUnit; }
std::string Memento::getUnitName() const { return unitName; }
