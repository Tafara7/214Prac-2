#include "ShieldBearer.h"

ShieldBearer::ShieldBearer() {
    healthPerSoldier = 120;
    damagePerSoldier = 30;
    defencePerSoldier = 50;
    amountOfSoldiersPerUnit = 8;
    unitName = "ShieldBearer";
}

void ShieldBearer::prepare() {
    std::cout << "ShieldBearer is preparing for battle." << std::endl;
}

void ShieldBearer::execute() {
    std::cout << "ShieldBearer is attacking!" << std::endl;
}

void ShieldBearer::retreat() {
    std::cout << "ShieldBearer is retreating." << std::endl;
}

void ShieldBearer::rest() {
    std::cout << "ShieldBearer is resting." << std::endl;
}

Soldiers* ShieldBearer::clonis() {
    return new ShieldBearer(*this);
}

void ShieldBearer::engage() {
    Soldiers::engage();
}

void ShieldBearer::disengage() {
    Soldiers::disengage();
}
