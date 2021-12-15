#include "Zombie.hpp"

int		main() {
	Zombie *all = zombieHorde(5, "Shit");
	for (int i = 0; i < 5; i++) {
		all[i].announce();
	}
	delete [] all;
	return (0);
}