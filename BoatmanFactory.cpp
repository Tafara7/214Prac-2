#include "BoatmanFactory.h"
#include "Boatman.h"

Soldiers* BoatmanFactory::createUnit() {
    return new Boatman();
}

int BoatmanFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return calculateTotalHealthPerUnit(createUnit());
}

int BoatmanFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return calculateTotalDamagePerUnit(createUnit());
}

int BoatmanFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return calculateTotalDefencePerUnit(createUnit());
}
