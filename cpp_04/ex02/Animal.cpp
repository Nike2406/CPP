#include "Animal.hpp"

Animal::Animal(void) {
	cout << "Animal constructor called\n";
}

Animal::Animal(string type) :
	_type(type) {
	cout << "Animal constructor called\n";
}

Animal::Animal(Animal const & tmp) {
	*this = tmp;
	cout << "Animal copy called\n";
}

Animal const& Animal::operator=(Animal const& assign) {
	this->_type = assign._type;
	cout << "Animal [=] operator called\n";
	return *this;
}

Animal::~Animal()
{
	cout << "Animal destructor called\n";
}

string	Animal::getType(void) const {
	return (this->_type);
}
