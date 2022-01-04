#pragma once
#include <iostream>
#include <string>
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;

# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define BACK		"\033[36m"
# define F_NONE		"\033[37m"

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

	virtual void	makeSound(void) const = 0;
	string			getType(void) const;
};