#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

}
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	// std::cout << "ScavTrap " << name << " was created!" << std::endl;
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
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	std::cout <<"ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage <<" points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitPoints)
	{
		amount = _hitPoints;
	}
	_hitPoints -= amount;
	std::cout << "ScavTrap " << _name << " took " << amount << " damage!" << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points!" << std::endl;
	}
}
void ScavTrap::guardGate()
{
	_guardingGate = true;
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}