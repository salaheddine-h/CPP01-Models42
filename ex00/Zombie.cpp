#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string string) : name(string) {}

Zombie::~Zombie()
{
    std::cout << name << " Destroyed." << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
