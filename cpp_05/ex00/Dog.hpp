#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog();

	void	makeSound(void) const;
	void	getType(void);
};