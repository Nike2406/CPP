#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(string name);
	~ScavTrap(void);

	void	guardGate(void);
};
