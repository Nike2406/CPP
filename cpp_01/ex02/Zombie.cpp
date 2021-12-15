#include "Zombie.hpp"

Zombie::Zombie (void) : _name("LoL") {};

Zombie::Zombie (std::string name) : _name(name) {
	std::cout << "Zombie " << this->_name << " rise!\n";
}

Zombie::~Zombie (void) {
	std::cout << "Zombie " << this->_name << " left...\n";
}

void	Zombie::announce(void) {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";
}
