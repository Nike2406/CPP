#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
private:
	string	_name;
	int		_hipoints;
	int		_energyPoints;
	int		_atackDamage;
public:
	ClapTrap(void);
	ClapTrap(string name);
	ClapTrap(ClapTrap const &);
	ClapTrap const& operator=(ClapTrap const &);
	~ClapTrap();

	void	attack(string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};