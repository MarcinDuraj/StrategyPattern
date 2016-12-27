#include "Silence.h"
#include <iostream>


Silence::Silence()
{
}


Silence::~Silence()
{
}

void Silence::quack()
{
    std::cout << " <<< SILENCE >>>" << std::endl;
}
