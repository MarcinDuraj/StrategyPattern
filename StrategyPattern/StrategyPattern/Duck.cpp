#include "Duck.h"
#include "iostream"

Duck::Duck()
{
}


Duck::~Duck()
{
}

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    std::cout << "Swiming" << std::endl;
}
