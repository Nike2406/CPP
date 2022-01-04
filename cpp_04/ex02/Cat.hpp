#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain	*_catPtr;
public:
	Cat(void);
	Cat(string str);
	Cat(Cat const & tmp);
	Cat const& operator=(Cat const& assign);
	~Cat();

	void	makeSound(void) const;
	void	getType(void);
};