#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("EMPTY"),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(string name) :
	_name(name),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(string name, int hitpoints, int energyPoints, int attackDamage) :
	_name(name),
	_hitpoints(hitpoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage) {
	cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const & tmp) {
	*this = tmp;
	cout << "Copy called\n";
}

ClapTrap const& ClapTrap::operator=(ClapTrap const& assign) {
	this->_name = assign._name;
	this->_hitpoints = assign._hitpoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamage = assign._attackDamage;
	cout << "[=] operator called\n";
	return *this;
}

string	ClapTrap::getName() const {
	return _name;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap destructor called\n";
}

void	ClapTrap::attack(string const & target) const {
	cout << "ClapTrap " << _name << " attack " << target \
		 << ", causing " << _attackDamage << " of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << _name << " takes " << amount \
		 << " of damage!\n";
	_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	cout << "ClapTrap " << _name << " repiered " << amount \
		 << " health points!\n";
	_hitpoints += amount;
}
