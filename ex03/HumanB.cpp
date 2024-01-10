#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

HumanB::~HumanB() {}

void HumanB::attack() const
{
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " is unarmed!" << std::endl;

}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}