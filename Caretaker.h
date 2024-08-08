#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include "Memento.h"

class CareTaker {
private:
    std::vector<Memento*> mementos;
public:
    void addMemento(Memento* memento);
    Memento* getMemento(int index);
    ~CareTaker();
};

#endif 
