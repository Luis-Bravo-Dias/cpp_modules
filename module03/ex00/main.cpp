/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:27:38 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/22 17:43:27 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ct("Bob");
	ClapTrap	ct2(ct);

	ct2.attack("Marley");
	ct2.takeDamage(5);
	ct2.beRepaired(15);
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	// ct2.takeDamage(5);
	// ct2.beRepaired(5);
	// ct2.attack("Marley");
	ct2.takeDamage(30);
	ct2.attack("Marley");
	ct2.beRepaired(12);
	ct2.takeDamage(1);
	

	return (0);
}