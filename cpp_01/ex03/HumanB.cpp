#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &herWeapon) {
	_herWeapon = &herWeapon;
}

void	HumanB::attack(void) {
	cout << this->_name << " attacks with his " << this->_herWeapon->getType() << endl;
}
