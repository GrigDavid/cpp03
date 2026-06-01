#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap val("Valod");
	ClapTrap valMladshiy(val);
	ScavTrap pedro("Pedro");
	ScavTrap pedroStarshiy = pedro;

	pedroStarshiy.guardGate();
	val.attack("Pedro");
	for (int i = 0; i < 11; i++)
	{
		val.beRepaired(12);
	}
	for (int i = 0; i < 51; i++)
	{
		valMladshiy.attack("Valod");
	}
	for (int i = 0; i < 3; i++)
	{
		pedro.takeDamage(70);
	}
	pedro.guardGate();
}
