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

int main()
{
	ClapTrap a("alberto");
	ClapTrap b("antonio");

	a.attack("antonio");
	b.takeDamage(1);
	std::cout << "antonio has " << b.getHp() << " hp! \n";
	std::cout << "alberto has " << a.getHp() << " hp! \n";
	a.beRepaired(10);
	std::cout << "alberto now has " << a.getHp() << " hp! \n";
}