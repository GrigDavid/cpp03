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

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap " << other._name << " was assigned to " << _name << std::endl;
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " doesn't have enough energy points!" << std::endl;
		return ;
	}
	std::cout <<"FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage <<" points of damage!" << std::endl;
	_energyPoints--;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitPoints)
	{
		amount = _hitPoints;
	}
	_hitPoints -= amount;
	std::cout << "FragTrap " << _name << " took " << amount << " damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "FragTrap " << _name << " repaired " << amount << " hit points!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name << " doesn't have enough energy points!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}