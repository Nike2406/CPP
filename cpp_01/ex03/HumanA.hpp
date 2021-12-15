#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&_hisWeapon;
	string	_name;
public:
	HumanA(string name, Weapon& hisWeapon);
	~HumanA();

	void	attack(void);
};
