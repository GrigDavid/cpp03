#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(), _guardingGate(false)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other), _guardingGate(false)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was created using copy constructor!" << std::endl;
}
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name), _guardingGate(false)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	_guardingGate = other._guardingGate;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " was destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	std::cout <<"ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage <<" points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	if (_guardingGate)
	{
		std::cout << "ScavTrap " << _name << " was already in Gate keeper mode!" << std::endl;
	}
	else
	{
		_guardingGate = true;
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
	}
}