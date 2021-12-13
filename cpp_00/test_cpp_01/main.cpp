#include "phonebook.hpp"

void	printing() {
	Phonebook instance;
	instance.publicFoo = 42;

	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
}

int	main() {

	std::cout << "Before\n";
	printing();
	std::cout << "After\n";

	return (0);
}