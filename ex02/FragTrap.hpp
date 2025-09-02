/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 00:19:26 by marvin            #+#    #+#             */
/*   Updated: 2025/09/03 00:19:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);  //constructor
		FragTrap(const FragTrap& other); // Copy constructor
		FragTrap& operator=(const FragTrap& other);  //Copy assigment operator
		~FragTrap();  // destructor
		void highFivesGuys();
};

#endif