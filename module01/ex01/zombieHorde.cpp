/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:36:36 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/18 15:41:53 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *zomb = new Zombie[N];
	
	int	i = 0;
	while (i < N)
	{
		zomb[i].set_name(name);
		i++;
	}
	
	return (zomb);
}