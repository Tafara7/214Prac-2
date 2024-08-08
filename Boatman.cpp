#include "Boatman.h"

// Constructor
Boatman::Boatman() {
    healthPerSolider = 80;
    damagePerSolider = 70;
    defencePerSolider = 20;
    amountOfSoldiersPerUnit = 12;
    unitName = "Boatman";
}

// Template Method
void Boatman::prepare() {
    std::cout << "Boatman is preparing for battle." << std::endl;
}

void Boatman::execute() {
    std::cout << "Boatman is attacking!" << std::endl;
}

void Boatman::retreat() {
    std::cout << "Boatman is retreating." << std::endl;
}

void Boatman::rest() {
    std::cout << "Boatman is resting." << std::endl;
}

// Prototype
Soldiers* Boatman::clonis() {
    return new Boatman(*this);
}

// Engage and Disengage
void Boatman::engage() {
    Soldiers::engage();
}

void Boatman::disengage() {
    Soldiers::disengage();
}
