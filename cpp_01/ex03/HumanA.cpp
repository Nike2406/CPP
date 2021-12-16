#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& hisWeapon)
:_hisWeapon(hisWeapon), _name(name){ }

HumanA::~HumanA(){}

void	HumanA::attack(void) {
	cout << this->_name << " attacks with his " << this->_hisWeapon.getType() << endl;
}
