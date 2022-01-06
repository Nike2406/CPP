#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	cout << "Default Cat constructor called" << endl;
}

Cat::~Cat()
{
	cout << "Default Cat destructor called" << endl;
}

void	Cat::makeSound() const {
	cout << "Meow!" << endl;
}
