#include "Infantry.h"

Infantry::Infantry() {
    healthPerSoldier = 100;
    damagePerSoldier = 20;
    defencePerSoldier = 10;
    amountOfSoldiersPerUnit = 100;
    unitName = "Infantry";
}

void Infantry::prepare() {
    std::cout << "Infantry is preparing for battle." << std::endl;
}

void Infantry::execute() {
    std::cout << "Infantry is attacking!" << std::endl;
}

void Infantry::retreat() {
    std::cout << "Infantry is retreating." << std::endl;
}

void Infantry::rest() {
    std::cout << "Infantry is resting." << std::endl;
}

Soldiers* Infantry::clonis() {
    return new Infantry(*this);
}

void Infantry::engage() {
    Soldiers::engage();
}

void Infantry::disengage() {
    Soldiers::disengage();
}
