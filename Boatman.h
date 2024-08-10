#ifndef BOATMAN_H
#define BOATMAN_H
#include <iostream>
#include "Soldiers.h"

class Boatman : public Soldiers
{
    private:
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
    public:
        void engage();
        void disengage();
        Soldiers* clonis();
        Boatman();

         
};

#endif