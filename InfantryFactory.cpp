#include "InfantryFactory.h"
#include "Infantry.h"

Soldiers* InfantryFactory::createUnit() {
    return new Infantry();
}

int InfantryFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->healthPerSoldier * unit->amountOfSoldiersPerUnit;
}

int InfantryFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->damagePerSoldier * unit->amountOfSoldiersPerUnit;
}

int InfantryFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->defencePerSoldier * unit->amountOfSoldiersPerUnit;
}
