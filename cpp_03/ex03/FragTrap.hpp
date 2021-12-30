#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(string name);
	~FragTrap(void);

	void	highFivesGuys(void);
};
