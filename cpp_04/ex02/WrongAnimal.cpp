#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(string type) :
	_type(type) {
	cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & tmp) {
	*this = tmp;
	cout << "WrongAnimal copy called\n";
}

WrongAnimal const& WrongAnimal::operator=(WrongAnimal const& assign) {
	this->_type = assign._type;
	cout << "WrongAnimal [=] operator called\n";
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound(void) const {
	cout << "WrongAnimal default sound!\n";
}

string	WrongAnimal::getType(void) const {
	return (this->_type);
}
