#pragma once
#include"FlyBehavior.h"
#include"QuackBehavior.h"


class Duck
{
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    Duck();
    ~Duck();

    void performFly();
    void performQuack();

    void swim();

    virtual void display() = 0;
};

