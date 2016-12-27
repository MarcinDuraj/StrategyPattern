#pragma once
#include "FlyBehavior.h"
class FlyWithNoWings :
    public FlyBehavior
{
public:
    FlyWithNoWings();
    ~FlyWithNoWings();

    virtual void fly();
};

