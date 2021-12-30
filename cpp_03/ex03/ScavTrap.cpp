#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_name = "Epmty";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(string name) : ClapTrap()
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called\n";
}

void	ScavTrap::attack(string const & target) const {
	cout << "ScavTrap " << _name << " attack " << target \
		 << ", causing " << _attackDamage << " of damage!\n";
}

void	ScavTrap::attack(ClapTrap & oth) const{
	cout << "ScavTrap " << _name << " attack " << oth._name \
		 << ", causing " << _attackDamage << " of damage!\n";
	oth.takeDamage(_attackDamage);
}

void	ScavTrap::guardGate(void) {
	cout << "I am the King now! .... or just a misrable gate keeper...\n";
}