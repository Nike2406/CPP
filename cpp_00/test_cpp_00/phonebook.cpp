#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(char a1, int a2, float a3) {
// Inicialisation list (without this->a1 = a1;)
// Phonebook::Phonebook(char p1, int p2, float p3)
//		: a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	this->foo = 42;
	this->a1 = a1;
	std::cout << "a1: " << a1 << std::endl;
	this->a2 = a2;
	std::cout << "a2: " << a2 << std::endl;
	this->a3 = a3;
	std::cout << "a3: " << a3 << std::endl;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
	return;
}

Phonebook::~Phonebook(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Phonebook::bar(void) {
	std::cout << "Function bar called \n";
	return;
}
