#include "Zombie.hpp"

void	Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie*	zombieHorde( int N, std::string name) {
	Zombie * z = new Zombie[N];
	while (N--) {
		z[N].setName(name);
	}
	return (z);
}