#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	this->name = new_name;
	this->AK47 = NULL;
}

void	HumanB::attack(void)
{
	if (!AK47)
		std::cout  << this->name << " has no weapon!" << std::endl;
	else
		std::cout  << this->name << " attacks with their " << this->AK47->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->AK47 = &
}

