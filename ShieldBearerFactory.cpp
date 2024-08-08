#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

Soldiers* ShieldBearerFactory::createUnit() {
    return new ShieldBearer();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return calculateTotalHealthPerUnit(createUnit());
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return calculateTotalDamagePerUnit(createUnit());
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return calculateTotalDefencePerUnit(createUnit());
}
