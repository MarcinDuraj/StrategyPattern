#pragma once
#include"FlyBehavior.h"
#include"QuackBehavior.h"


class Duck
{
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
public:
    Duck();
    ~Duck();

    void performFly();
    void performQuack();

    void swim();

    virtual void display() = 0;
};

