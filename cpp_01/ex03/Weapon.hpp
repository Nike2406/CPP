#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon
{
private:
	string	_type;
public:
	Weapon(string const &type);
	Weapon(void);
	~Weapon(void);

	string const&	getType(void);
	void	setType(string type);
};

