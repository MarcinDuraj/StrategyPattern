#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <iostream>
#include <new>


MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}


MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
    std::cout << "I'm a real Mallard Duck" << std::endl;
}
