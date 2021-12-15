#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(string const &type) : _type(type) {}

Weapon::~Weapon(void) {}

string const&	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(string type) {
	this->_type = type;
}
