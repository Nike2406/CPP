#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	string _name;
public:
	DiamondTrap(void);
	DiamondTrap(string name);
	~DiamondTrap(void);

	void whoAmI();
};
