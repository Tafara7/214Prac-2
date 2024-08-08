#include <iostream>
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"

void demoFactoryMethod() {

    InfantryFactory* infantryFactory = new InfantryFactory();
    ShieldBearerFactory* shieldBearerFactory = new ShieldBearerFactory();
    BoatmanFactory* boatmanFactory = new BoatmanFactory();

    Soldiers* infantryUnit = infantryFactory->getUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory->getUnit();
    Soldiers* boatmanUnit = boatmanFactory->getUnit();

    std::cout << "Factory Method Demo: " << std::endl;
    std::cout << "Infantry Unit Total Health: " << infantryFactory->calculateTotalHealthPerUnit(infantryUnit) << std::endl;
    std::cout << "ShieldBearer Unit Total Damage: " << shieldBearerFactory->calculateTotalDamagePerUnit(shieldBearerUnit) << std::endl;
    std::cout << "Boatman Unit Total Defence: " << boatmanFactory->calculateTotalDefencePerUnit(boatmanUnit) << std::endl;

    delete infantryFactory;
    delete shieldBearerFactory;
    delete boatmanFactory;
    delete infantryUnit;
    delete shieldBearerUnit;
    delete boatmanUnit;
}

// void demoPrototype() {
//     Soldiers* originalInfantry = new Infantry();
//     Soldiers* clonedInfantry = originalInfantry->clonis();

//     std::cout << "\nPrototype Pattern Demo: " << std::endl;
//     std::cout << "Original Infantry Unit Name: " << originalInfantry->unitName() << std::endl;
//     std::cout << "Cloned Infantry Unit Name: " << clonedInfantry->unitName() << std::endl;

//     delete originalInfantry;
//     delete clonedInfantry;
// }

// void demoTemplateMethod() {
//     Soldiers* infantry = new Infantry();
//     Soldiers* shieldBearer = new ShieldBearer();
//     Soldiers* boatman = new Boatman();

//     std::cout << "\nTemplate Method Pattern Demo: " << std::endl;
//     std::cout << "Infantry engaging: " << std::endl;
//     infantry->engage();
//     std::cout << "ShieldBearer disengaging: " << std::endl;
//     shieldBearer->disengage();
//     std::cout << "Boatman engaging: " << std::endl;
//     boatman->engage();

//     delete infantry;
//     delete shieldBearer;
//     delete boatman;
// }

// void demoMemento() {
//     Soldiers* infantry = new Infantry();
//     CareTaker careTaker;

//     // Save state
//     careTaker.addMemento(infantry->militusMemento());

//     // Modify state
//     infantry->healthPerSoldier = 200;

//     std::cout << "\nMemento Pattern Demo: " << std::endl;
//     std::cout << "Infantry Health before restore: " << infantry->healthPerSoldier << std::endl;

//     // Restore state
//     infantry->vivificaMemento(careTaker.getMemento(0));

//     std::cout << "Infantry Health after restore: " << infantry->healthPerSoldier << std::endl;

//     delete infantry;
// }

int main() {
    demoFactoryMethod();
    // demoPrototype();
    // demoTemplateMethod();
    // demoMemento();

    return 0;
}
