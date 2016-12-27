#include "Duck.h"
#include "MallardDuck.h"
#include <iostream>

void main()
{
    Duck *mallardDuck = new MallardDuck;

    mallardDuck->performFly();
    mallardDuck->performQuack();

    mallardDuck->display();

    system("pause");
}