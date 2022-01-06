#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
protected:
	string	_type;
public:
	WrongAnimal(void);
	WrongAnimal(string name);
	WrongAnimal(WrongAnimal const &);
	WrongAnimal const& operator=(WrongAnimal const &);
	~WrongAnimal();

	void	makeSound(void) const;
	string			getType(void) const;
};