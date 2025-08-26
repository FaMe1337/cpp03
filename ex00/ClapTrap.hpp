

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
		void getValues() const;
		void setValues(const ClapTrap& other);


	private:
		std::string _name;
		int			_hit_points = 10;
		int			_energy_points = 10;
		int			_attack_damage = 0;

};

#endif