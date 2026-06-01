#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap val("Valod");
	ScavTrap pedro("Pedro");
	FragTrap nurso("Nursultan");

	nurso.highFivesGuys();
	for (int i = 0; i < 101; i++)
	{
		nurso.attack("helicopter");
	}
	nurso.highFivesGuys();
	val = nurso;
	val.attack("airplane");
	return (0);
}