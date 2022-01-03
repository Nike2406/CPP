#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("EMPTY"),
	_hipoints(10),
	_energyPoints(10),
	_atackDamage(0) {
	cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(string name) :
	_name(name),
	_hipoints(10),
	_energyPoints(10),
	_atackDamage(0) {
	cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const & tmp) {
	*this = tmp;
	cout << "Copy called\n";
}

ClapTrap const& ClapTrap::operator=(ClapTrap const& assign) {
	this->_name = assign._name;
	this->_hipoints = assign._hipoints;
	this->_energyPoints = assign._energyPoints;
	this->_atackDamage = assign._atackDamage;
	cout << "[=] operator called\n";
	return *this;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor called\n";
}

void	ClapTrap::attack(string const & target) {
	cout << "ClapTrap " << _name << " attack " << target \
		 << ", causing " << _atackDamage << " of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << _name << " takes " << amount \
		 << " of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	cout << "ClapTrap " << _name << " repiered " << amount \
		 << " health points!\n";
}
