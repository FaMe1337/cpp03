/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:15:00 by marvin            #+#    #+#             */
/*   Updated: 2025/09/03 00:21:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);  // constructor
		ClapTrap(const ClapTrap& other); // Copy constructor
		ClapTrap& operator=(const ClapTrap& other);  //Copy assigment operator
		~ClapTrap();  // destructor
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int  getAtkDmg() const;
		int  getHp() const;
		int  getEp() const;

	protected:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_ad;
		void setHp(unsigned int amount);
		void setDmg(int amount);
};

#endif