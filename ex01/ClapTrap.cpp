#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() :
_name(""),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : 
_name(other._name),
_hitPoints(other._hitPoints),
_energyPoints(other._energyPoints),
_attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " was created using copy constructor!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap " << other._name << " was assigned to " << _name << std::endl;
	if (this == &other)
		return (*this);
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " was destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	std::cout <<"ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage <<" points of damage!" << std::endl;
	_energyPoints--;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitPoints)
	{
		amount = _hitPoints;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough energy points!" << std::endl;
	}
}