/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:35:55 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/18 15:44:47 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

Zombie*	zombieHorde(int N, std::string name);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	N = atoi(av[1]);
		Zombie	*horde = zombieHorde(N, "Joaquim");
		
		int i = 0;
		while (i < N)
		{
			horde[i].announce();
			std::cout << "Zombie count: " << i + 1 << std::endl;
			i++;
		}
		delete [] horde;
	}
	return (0);
}