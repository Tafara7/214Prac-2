#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include <iostream>
#include "Soldiers.h"

class ShieldBearer : public Soldiers
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
        ShieldBearer();
         
};

#endif