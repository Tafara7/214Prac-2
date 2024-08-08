#include "ShieldBearer.h"

// Constructor
ShieldBearer::ShieldBearer() {
    healthPerSolider = 120;
    damagePerSolider = 30;
    defencePerSolider = 50;
    amountOfSoldiersPerUnit = 8;
    unitName = "ShieldBearer";
}

// Template Method
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

// Prototype
Soldiers* ShieldBearer::clonis() {
    return new ShieldBearer(*this);
}

// Engage and Disengage
void ShieldBearer::engage() {
    Soldiers::engage();
}

void ShieldBearer::disengage() {
    Soldiers::disengage();
}
