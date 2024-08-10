#include <iostream>
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include "CareTaker.h"

void printHeader(const std::string& title) {
    std::cout << "\033[1;34m" << "============================" << std::endl;
    std::cout << title << std::endl;
    std::cout << "============================" << "\033[0m" << std::endl;
}

void printSubHeader(const std::string& subtitle) {
    std::cout << "\033[1;33m" << subtitle << "\033[0m" << std::endl;
}

void demoFactoryMethod() {
    printHeader("Factory Method Pattern Demo");

    SoldierFactory* infantryFactory = new InfantryFactory();
    SoldierFactory* shieldBearerFactory = new ShieldBearerFactory();
    SoldierFactory* boatmanFactory = new BoatmanFactory();

    Soldiers* infantryUnit = infantryFactory->getUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory->getUnit();
    Soldiers* boatmanUnit = boatmanFactory->getUnit();

    printSubHeader("Infantry Unit");
    std::cout << "Total Health: " << infantryFactory->getHealth(infantryUnit) << std::endl;
    std::cout << std::endl;

    printSubHeader("ShieldBearer Unit");
    std::cout << "Total Damage: " << shieldBearerFactory->getDamage(shieldBearerUnit) << std::endl;
    std::cout << std::endl;

    printSubHeader("Boatman Unit");
    std::cout << "Total Defence: " << boatmanFactory->getDefence(boatmanUnit) << std::endl;
    std::cout << std::endl;

    delete infantryFactory;
    delete shieldBearerFactory;
    delete boatmanFactory;
    delete infantryUnit;
    delete shieldBearerUnit;
    delete boatmanUnit;
}

void demoPrototype() {
    printHeader("Prototype Pattern Demo");

    Soldiers* originalInfantry = new Infantry();
    Soldiers* clonedInfantry = originalInfantry->clonis();

    printSubHeader("Original Infantry Stats");
    std::cout << "Unit Name: " << originalInfantry->getName() << std::endl;
    std::cout << "Health: " << originalInfantry->getHealth() << std::endl;
    std::cout << "Damage: " << originalInfantry->getDamage() << std::endl;
    std::cout << "Defence: " << originalInfantry->getDefence() << std::endl;
    std::cout << "Amount of soldiers: " << originalInfantry->getAmountOfSoldiers() << std::endl;
    std::cout << std::endl;

    printSubHeader("Cloned Infantry Stats");
    std::cout << "Unit Name: " << clonedInfantry->getName() << std::endl;
    std::cout << "Health: " << clonedInfantry->getHealth() << std::endl;
    std::cout << "Damage: " << clonedInfantry->getDamage() << std::endl;
    std::cout << "Defence: " << clonedInfantry->getDefence() << std::endl;
    std::cout << "Amount of soldiers: " << clonedInfantry->getAmountOfSoldiers() << std::endl;
    std::cout << std::endl;

    delete originalInfantry;
    delete clonedInfantry;
}

void demoTemplateMethod() {
    printHeader("Template Method Pattern Demo");

    Soldiers* infantry = new Infantry();
    Soldiers* shieldBearer = new ShieldBearer();
    Soldiers* boatman = new Boatman();

    printSubHeader("Infantry engaging");
    infantry->engage();
    std::cout << std::endl;

    printSubHeader("ShieldBearer disengaging");
    shieldBearer->disengage();
    std::cout << std::endl;

    printSubHeader("Boatman engaging");
    boatman->engage();
    std::cout << std::endl;

    delete infantry;
    delete shieldBearer;
    delete boatman;
}

void demoMemento() {
    printHeader("Memento Pattern Demo");

    Soldiers* infantry = new Infantry();
    CareTaker careTaker;

    // Save state
    careTaker.addMemento(infantry->militusMemento());

    // Modify state
    infantry->setHealth(200);

    std::cout << "Infantry Health before restore: " << infantry->getHealth() << std::endl;

    // Restore state
    infantry->vivificaMemento(careTaker.getMemento(0));

    std::cout << "Infantry Health after restore: " << infantry->getHealth() << std::endl;
    std::cout << std::endl;

    delete infantry;
}

int main() {
    demoFactoryMethod();
    demoPrototype();
    demoTemplateMethod();
    demoMemento();

    return 0;
}
