#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	cout << "Default Dog constructor called" << endl;
}

Dog::~Dog()
{
	cout << "Default Dog destructor called" << endl;
}

void	Dog::makeSound() const {
	cout << "Af-Af!" << endl;
}
