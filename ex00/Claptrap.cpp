
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assigment operator called\n";
	if (this != &other)
		setValues(other);
	return *this;	
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called\n";
}

void ClapTrap::setValues(const ClapTrap& other)
{
	
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target \
		<< " causing " <<  /* getter() */ 1 << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took damage of " << amount << " points\n";
	setValue(getValue() - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " got repaired for " << amount << " points\n";
	setValue(getValue() + amount);
}