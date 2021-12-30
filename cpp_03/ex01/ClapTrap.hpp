#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	friend class ScavTrap;
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
	virtual ~ClapTrap();

	void	virtual attack(string const & target) const;
	void	virtual attack(ClapTrap & oth) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};