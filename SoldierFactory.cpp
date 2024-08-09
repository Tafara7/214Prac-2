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

Soldiers* SoldierFactory::getUnit()
{
    return createUnit();
}

int SoldierFactory::getHealth(Soldiers* unit)
{
    return calculateTotalHealthPerUnit(unit);
}

int SoldierFactory::getDamage(Soldiers* unit)
{
    return calculateTotalDamagePerUnit(unit);
}

int SoldierFactory::getDefence(Soldiers* unit)
{
    return calculateTotalDefencePerUnit(unit);
}