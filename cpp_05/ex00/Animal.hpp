#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Animal
{
protected:
	string	_type;
public:
	Animal(void);
	Animal(string name);
	Animal(Animal const &);
	Animal const& operator=(Animal const &);
	virtual ~Animal();

	virtual void	makeSound(void) const;
	string			getType(void) const;
};