#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(string name);
	ScavTrap(string name, int hitpoints, int energyPoints, int attackDamage);
	~ScavTrap(void);

	void	attack(string const & target) const;
	void	attack(ClapTrap & oth) const;
	void	guardGate(void);
};
