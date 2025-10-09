#include "Zombie.hpp"
#include <iostream>

// Zombie::Zombie(std::string string) : name(string) {}

// Zombie::~Zombie()
// {
//     std::cout << name << " Destroyed." << std::endl;
// }

// void Zombie::announce()
// {
//     std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
// }


// Zombie.cpp

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

