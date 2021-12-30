#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_name = "Monster";
	_energyPoints = 50;
	cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(string name) : FragTrap(name + "_clap_name"), _name(name)
{
	_energyPoints = 50;
	cout << "DiamondTrap constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap destructor called\n";
}

void	DiamondTrap::whoAmI(void) {
	cout << "Am... definitely, who am I?!\n";
}
