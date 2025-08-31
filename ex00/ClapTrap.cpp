
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) , _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap constructor called\n";
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
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_ad = other._ad;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called\n";
}

void ClapTrap::setDmg(int amount)
{
	_hp -= amount;
}
void ClapTrap::setHp(unsigned int amount)
{
	_hp += amount;
}

int ClapTrap::getAtkDmg() const
{
	return _ad;
}

int ClapTrap::getHp() const
{
	return _hp;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hp < 1)
	{
		std::cout << "ClapTrap " << _name << " is already dead!\n";
		return ;
	}
	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " has no energy and can't attack!\n";
		return ;
	}
	--_ep;
	std::cout << "ClapTrap " << _name << " attacks " << target \
		<< " causing " <<  getAtkDmg() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took damage of " << amount << " points\n";
	setDmg(amount);
	if (_hp < 1)
		std::cout << "ClapTrap " << _name << " lost all of his Hit Points and got destroyed!!!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy and can't repair!\n";
		return ;
	}
	--_ep;
	std::cout << "ClapTrap " << _name << " got repaired for " << amount << " points\n";
	setHp(amount);
}