#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	_dogPtr = new Brain("Some idea of dog!");
	cout << "Default Dog constructor called" << endl;
}

Dog::Dog(string str) : Animal("Dog")
{
	_dogPtr = new Brain(str);
	cout << "Default Dog constructor called" << endl;
}

Dog::Dog(Dog const & tmp) {
	_dogPtr = new Brain;
	*this = tmp;
	cout << "Dog copy called\n";
}

Dog const& Dog::operator=(Dog const& assign) {
	this->_type = assign._type;
	*(this->_dogPtr) = *(assign._dogPtr);
	cout << "Dog [=] operator called\n";
	return *this;
}

Dog::~Dog()
{
	delete _dogPtr;
	cout << "Default Dog "<< RED << "destructor " << DEFAULT << "called" << endl;
}

void	Dog::makeSound() const {
	cout << "Af-Af!" << endl;
}
