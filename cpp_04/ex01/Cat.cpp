#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	cout << "Default Cat constructor called" << endl;
}

Cat::Cat(string str) : Animal("Cat")
{
	_catPtr = new Brain(str);
	cout << "Default Cat constructor called" << endl;
}

Cat::Cat(Cat const & tmp) {
	this->_type = tmp._type;
	*(this->_catPtr) = *(tmp._catPtr);
	cout << "Cat copy called\n";
}

Cat const& Cat::operator=(Cat const& assign) {
	this->_type = assign._type;
		*(this->_catPtr) = *(assign._catPtr);
	cout << "Cat [=] operator called\n";
	return *this;
}

Cat::~Cat()
{
	delete _catPtr;
	cout << "Default Cat destructor called" << endl;
}

void	Cat::makeSound() const {
	cout << "Meow!" << endl;
}
