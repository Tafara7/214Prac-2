#include "SoldierFactory.h"

int SoldierFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->healthPerSoldier * unit->amountOfSoldiersPerUnit;
}

int SoldierFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->damagePerSoldier * unit->amountOfSoldiersPerUnit;
}

int SoldierFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->defencePerSoldier * unit->amountOfSoldiersPerUnit;
}
