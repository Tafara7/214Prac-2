#include "Soldiers.h"
#include "Memento.h"

// Template Method
void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}

// Prototype
Soldiers* Soldiers::clonis() {
    return NULL;
}

// Memento
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

// Abstract methods
void Soldiers::prepare() {}
void Soldiers::execute() {}
void Soldiers::retreat() {}
void Soldiers::rest() {}
