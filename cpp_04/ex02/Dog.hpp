#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain	*_dogPtr;
public:
	Dog(void);
	Dog(string str);
	Dog(Dog const & tmp);
	Dog const& operator=(Dog const& assign);
	~Dog();

	void	makeSound(void) const;
	void	getType(void);
};