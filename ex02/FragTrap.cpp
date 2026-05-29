#include "FragTrap.hpp"
#include <iostream>


FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created using copy constructor!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}