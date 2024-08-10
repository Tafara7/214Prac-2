#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
#include "Soldiers.h"

class Infantry : public Soldiers
{
    private:
        void prepare() override;
        void execute() override;
        void retreat() override;
        void rest() override;
    public:
        void engage();
        void disengage();
        Soldiers* clonis() override;
        Infantry();
};

#endif