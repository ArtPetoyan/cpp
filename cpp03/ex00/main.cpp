#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("first");
	ClapTrap b("second");

	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	b.attack(a.getName());
	a.beRepaired(5);
	a.takeDamage(b.getDamage());
}