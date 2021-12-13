#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->privateFoo: " << this->publicFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Phonebook::~Phonebook(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Phonebook::publicBar(void) const {
	std::cout << "Public Bar\n";
	return;
}

void	Phonebook::_privateBar(void) const {
	std::cout << "Private Bar\n";
	return;
}
