

#ifndef	 CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);  // default constructor
		ClapTrap(const ClapTrap& other); // Copy constructor
		ClapTrap& operator=(const ClapTrap& other);  //Copy assigment operator
		~ClapTrap();  // destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int  getAtkDmg() const;
		int  getHp() const;
		void setHp(unsigned int amount);
		void setDmg(int amount);


	private:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_ad;

};

#endif