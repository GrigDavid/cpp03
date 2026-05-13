#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(const std::string& name);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		virtual void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		int			_hitPoints = 10;
		int			_energyPoints = 10;
		int			_attackDamage = 0;
};

#endif