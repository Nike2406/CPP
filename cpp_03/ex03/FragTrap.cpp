#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	_name = "Epmty";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(string name) : ClapTrap()
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	cout << "FragTrap constructor called\n";
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called\n";
}

void	FragTrap::highFivesGuys(void) {
	cout << "Hey guys! Gimme a five!\n";
}