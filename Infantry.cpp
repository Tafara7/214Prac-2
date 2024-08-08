#include "Infantry.h"

// Constructor
Infantry::Infantry() {
    healthPerSolider = 100;
    damagePerSolider = 50;
    defencePerSolider = 30;
    amountOfSoldiersPerUnit = 10;
    unitName = "Infantry";
}

// Template Method
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

// Prototype
Soldiers* Infantry::clonis() {
    return new Infantry(*this);
}

// Engage and Disengage
void Infantry::engage() {
    Soldiers::engage();
}

void Infantry::disengage() {
    Soldiers::disengage();
}
