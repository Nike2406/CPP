#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	~Cat();

	void	makeSound(void) const;
	void	getType(void);
};