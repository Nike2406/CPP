#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	ClapTrap a("Genshiro");
	ScavTrap b("Nani");
	FragTrap c("Slowpoke");

	b.guardGate();

	a.attack(b);
	b.attack(a);
	a.beRepaired(10);
	b.beRepaired(20);
	c.highFivesGuys();
	a.attack(c);
	b.attack(c);
	return 0;
}