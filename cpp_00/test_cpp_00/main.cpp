#include "phonebook.hpp"

void	printing() {
	Phonebook instance1('a', 12, 3.5);
	Phonebook instance2('b', 44, 2.5);

	instance1.foo = 42;
	std::cout << "instanse.foo: " << instance1.foo << std::endl;

	instance1.bar();
}

int	main() {

	std::cout << "Before\n";
	printing();
	std::cout << "After\n";

	return (0);
}