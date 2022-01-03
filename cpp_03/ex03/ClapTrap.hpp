#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
protected:
	string	_name;
	int		_hitpoints;
	int		_energyPoints;
	int		_attackDamage;
public:
	ClapTrap(void);
	ClapTrap(string name);
	ClapTrap(string name, int hitpoints, int energyPoints, int attackDamage);
	ClapTrap(ClapTrap const &);
	ClapTrap const& operator=(ClapTrap const &);
	string	getName() const;
	virtual ~ClapTrap();

	void	attack(string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};