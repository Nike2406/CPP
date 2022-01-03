#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	ClapTrap a("Genshiro");
	ScavTrap b("Nani");
	FragTrap c("Slowpoke");

	b.guardGate();

	a.attack(b.getName());
	b.attack(a.getName());
	a.beRepaired(10);
	b.beRepaired(20);
	c.highFivesGuys();
	a.attack(c.getName());
	b.attack(c.getName());
	return 0;
}