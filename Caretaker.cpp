#include "CareTaker.h"

void CareTaker::addMemento(Memento* memento) {
    mementos.push_back(memento);
}

Memento* CareTaker::getMemento(int index) {
    if (index < 0 || index >= mementos.size()) {
        return NULL;
    }
    return mementos[index];
}

CareTaker::~CareTaker() {
    for (std::vector<Memento*>::iterator it = mementos.begin(); it != mementos.end(); ++it) {
        delete *it;
    }
}

