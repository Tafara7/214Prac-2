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

void testInfantry() {
    printHeader("Testing Infantry Class");

    Infantry infantry;
    
    // Test setting and getting methods
    infantry.setName("Test Infantry");
    infantry.setHealth(120);
    infantry.setDamage(60);
    infantry.setDefence(40);
    infantry.setAmountOfSoldiers(12);

    printSubHeader("Testing Infantry Unit Attributes");
    std::cout << "Name: " << infantry.getName() << std::endl;
    std::cout << "Health: " << infantry.getHealth() << std::endl;
    std::cout << "Damage: " << infantry.getDamage() << std::endl;
    std::cout << "Defence: " << infantry.getDefence() << std::endl;
    std::cout << "Amount of soldiers: " << infantry.getAmountOfSoldiers() << std::endl;

    // Test engage, disengage, and other operations
    printSubHeader("Testing Infantry Unit Operations");
    infantry.engage();
    infantry.disengage();
    
    // Test Prototype pattern
    printSubHeader("Testing Infantry Cloning");
    Soldiers* clonedInfantry = infantry.clonis();
    std::cout << "Cloned Unit Name: " << clonedInfantry->getName() << std::endl;
    std::cout << "Cloned Health: " << clonedInfantry->getHealth() << std::endl;

    delete clonedInfantry;
}

void testShieldBearer() {
    printHeader("Testing ShieldBearer Class");

    ShieldBearer shieldBearer;
    
    // Test setting and getting methods
    shieldBearer.setName("Test ShieldBearer");
    shieldBearer.setHealth(150);
    shieldBearer.setDamage(40);
    shieldBearer.setDefence(70);
    shieldBearer.setAmountOfSoldiers(8);

    printSubHeader("Testing ShieldBearer Unit Attributes");
    std::cout << "Name: " << shieldBearer.getName() << std::endl;
    std::cout << "Health: " << shieldBearer.getHealth() << std::endl;
    std::cout << "Damage: " << shieldBearer.getDamage() << std::endl;
    std::cout << "Defence: " << shieldBearer.getDefence() << std::endl;
    std::cout << "Amount of soldiers: " << shieldBearer.getAmountOfSoldiers() << std::endl;

    // Test engage, disengage, and other operations
    printSubHeader("Testing ShieldBearer Unit Operations");
    shieldBearer.engage();
    shieldBearer.disengage();
    
    // Test Prototype pattern
    printSubHeader("Testing ShieldBearer Cloning");
    Soldiers* clonedShieldBearer = shieldBearer.clonis();
    std::cout << "Cloned Unit Name: " << clonedShieldBearer->getName() << std::endl;
    std::cout << "Cloned Health: " << clonedShieldBearer->getHealth() << std::endl;

    delete clonedShieldBearer;
}

void testBoatman() {
    printHeader("Testing Boatman Class");

    Boatman boatman;
    
    // Test setting and getting methods
    boatman.setName("Test Boatman");
    boatman.setHealth(100);
    boatman.setDamage(30);
    boatman.setDefence(50);
    boatman.setAmountOfSoldiers(15);

    printSubHeader("Testing Boatman Unit Attributes");
    std::cout << "Name: " << boatman.getName() << std::endl;
    std::cout << "Health: " << boatman.getHealth() << std::endl;
    std::cout << "Damage: " << boatman.getDamage() << std::endl;
    std::cout << "Defence: " << boatman.getDefence() << std::endl;
    std::cout << "Amount of soldiers: " << boatman.getAmountOfSoldiers() << std::endl;

    // Test engage, disengage, and other operations
    printSubHeader("Testing Boatman Unit Operations");
    boatman.engage();
    boatman.disengage();
    
    // Test Prototype pattern
    printSubHeader("Testing Boatman Cloning");
    Soldiers* clonedBoatman = boatman.clonis();
    std::cout << "Cloned Unit Name: " << clonedBoatman->getName() << std::endl;
    std::cout << "Cloned Health: " << clonedBoatman->getHealth() << std::endl;

    delete clonedBoatman;
}

void testFactories() {
    printHeader("Testing Factory Method Pattern");

    InfantryFactory infantryFactory;
    ShieldBearerFactory shieldBearerFactory;
    BoatmanFactory boatmanFactory;

    Soldiers* infantry = infantryFactory.getUnit();
    Soldiers* shieldBearer = shieldBearerFactory.getUnit();
    Soldiers* boatman = boatmanFactory.getUnit();

    printSubHeader("Testing Factory Method Outputs");
    std::cout << "Infantry Health: " << infantry->getHealth() << std::endl;
    std::cout << "ShieldBearer Damage: " << shieldBearer->getDamage() << std::endl;
    std::cout << "Boatman Defence: " << boatman->getDefence() << std::endl;

    delete infantry;
    delete shieldBearer;
    delete boatman;
}

void testMemento() {
    printHeader("Testing Memento Pattern");

    Infantry infantry;
    CareTaker careTaker;

    infantry.setHealth(250);
    careTaker.addMemento(infantry.militusMemento());

    infantry.setHealth(100);
    std::cout << "Infantry Health before restore: " << infantry.getHealth() << std::endl;

    infantry.vivificaMemento(careTaker.getMemento(0));
    std::cout << "Infantry Health after restore: " << infantry.getHealth() << std::endl;
}

int main() {
    testInfantry();
    testShieldBearer();
    testBoatman();
    testFactories();
    testMemento();

    return 0;
}
