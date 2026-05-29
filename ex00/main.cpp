#include "ClapTrap.hpp"

int main()
{
	ClapTrap val("Valod");
	ClapTrap valMladshiy(val);
	ClapTrap valStarshiy = valMladshiy;
	ClapTrap pedro("Pedro");

	val.attack("Pedro");
	for (int i = 0; i < 12; i++)
	{
		val.beRepaired(12);
	}
	for (int i = 0; i < 6; i++)
	{
		pedro.attack("Valod");
	}
	for (int i = 0; i < 4; i++)
	{
		valMladshiy.takeDamage(7);
	}
	
	

	return (0);
}