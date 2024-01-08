#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is unarmed!" << std::endl;

}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}