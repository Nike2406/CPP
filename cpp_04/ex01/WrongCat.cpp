#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	cout << "Default WrongCat constructor called" << endl;
}

WrongCat::~WrongCat()
{
	cout << "Default WrongCat destructor called" << endl;
}

void	WrongCat::makeSound() const {
	cout << "Af-Af! - this is wrong cat!" << endl;
}
