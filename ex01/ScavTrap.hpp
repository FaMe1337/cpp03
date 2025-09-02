/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:24:12 by marvin            #+#    #+#             */
/*   Updated: 2025/09/02 23:24:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);  //constructor
		ScavTrap(const ScavTrap& other); // Copy constructor
		ScavTrap& operator=(const ScavTrap& other);  //Copy assigment operator
		~ScavTrap();  // destructor
		void guardGate();
};

#endif