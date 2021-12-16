#pragma once
#include "Weapon.hpp"

class HumanB {
private:
	string	_name;
	Weapon	*_herWeapon;
public:
	HumanB(string name);
	~HumanB();

	void	setWeapon(Weapon &herWeapon);
	void	attack(void);
};
