#include "Soldiers.h"
#include "Memento.h"

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}

Soldiers* Soldiers::clonis() {
    return NULL;
}

Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
    healthPerSoldier = mem->healthPerSolider;
    damagePerSoldier = mem->damagePerSolider;
    defencePerSoldier = mem->defencePerSolider;
    amountOfSoldiersPerUnit = mem->amountOfSoldiersPerUnit;
    unitName = mem->unitName;
}

std::string Soldiers::getName() const {
    return unitName;
}

int Soldiers::getHealth() const {
    return healthPerSoldier;
}

int Soldiers::getDamage() const {
    return damagePerSoldier;
}

int Soldiers::getDefence() const {
    return defencePerSoldier;
}

int Soldiers::getAmountOfSoldiers() const {
    return amountOfSoldiersPerUnit;
}

void Soldiers::setName(std::string name) {
    unitName = name;
}

void Soldiers::setHealth(int health) {
    healthPerSoldier = health;
}

void Soldiers::setDamage(int damage) {
    damagePerSoldier = damage;
}

void Soldiers::setDefence(int defence) {
    defencePerSoldier = defence;
}

void Soldiers::setAmountOfSoldiers(int amount) {
    amountOfSoldiersPerUnit = amount;
}

void Soldiers::prepare() {}
void Soldiers::execute() {}
void Soldiers::retreat() {}
void Soldiers::rest() {}



