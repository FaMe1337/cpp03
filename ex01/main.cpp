/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:45:17 by marvin            #+#    #+#             */
/*   Updated: 2025/08/31 19:45:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("alberto");
	ScavTrap b("antonio");

	a.attack("antonio");
	b.takeDamage(1);
	std::cout << "antonio has " << b.getHp() << " hp! \n";
	b.beRepaired(10);
	std::cout << "antonio now has " << b.getHp() << " hp! \n";
	b.guardGate();
}