#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

// int main()
// {
// 	ScavTrap tmp("banan");

// 	for (int i = 0; i < 3; i++)
// 		tmp.takeDamage(60);
// }

int main()
{
	std::cout << "=== Creating ClapTrap ===" << std::endl;
	ClapTrap clap("CL4P-TP");

	std::cout << std::endl;

	std::cout << "=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav("SC4V-TP");

	std::cout << std::endl;

	std::cout << "=== ClapTrap tests ===" << std::endl;
	clap.attack("bandit");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << std::endl;

	std::cout << "=== ScavTrap tests ===" << std::endl;
	scav.attack("psycho");
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl;

	std::cout << "=== Energy depletion test ===" << std::endl;
	for (int i = 0; i < 55; i++)
	{
		scav.attack("target");
	}

	std::cout << std::endl;

	std::cout << "=== HP depletion test ===" << std::endl;
	scav.takeDamage(200);
	scav.attack("another target");
	scav.beRepaired(10);

	std::cout << std::endl;
	std::cout << "=== End of program ===" << std::endl;

	return (0);
}