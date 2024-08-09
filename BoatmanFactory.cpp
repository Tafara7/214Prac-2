#include "BoatmanFactory.h"
#include "Boatman.h"

Soldiers* BoatmanFactory::createUnit() {
    return new Boatman();
}

int BoatmanFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->healthPerSoldier * unit->amountOfSoldiersPerUnit;
}

int BoatmanFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->damagePerSoldier * unit->amountOfSoldiersPerUnit;
}

int BoatmanFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->defencePerSoldier * unit->amountOfSoldiersPerUnit;
}