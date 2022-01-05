#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Dog d;
	const Dog e(d);

	const Cat c;
	const Cat l(c);

	j->makeSound();
	i->makeSound();
	d.makeSound();

	delete j;
	delete i;
	i = NULL;
	j = NULL;

	while(1);

	return 0;
}