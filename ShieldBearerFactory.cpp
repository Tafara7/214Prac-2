#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

Soldiers* ShieldBearerFactory::createUnit() {
    return new ShieldBearer();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->healthPerSoldier * unit->amountOfSoldiersPerUnit;
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->damagePerSoldier * unit->amountOfSoldiersPerUnit;
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->defencePerSoldier * unit->amountOfSoldiersPerUnit;
}