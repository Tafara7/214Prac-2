#include "InfantryFactory.h"
#include "Infantry.h"

Soldiers* InfantryFactory::createUnit() {
    return new Infantry();
}

int InfantryFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return calculateTotalHealthPerUnit(createUnit());
}

int InfantryFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return calculateTotalDamagePerUnit(createUnit());
}

int InfantryFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return calculateTotalDefencePerUnit(createUnit());
}
