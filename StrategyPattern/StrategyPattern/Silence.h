#pragma once
#include "QuackBehavior.h"
class Silence :
    public QuackBehavior
{
public:
    Silence();
    ~Silence();

    virtual void quack();
};

