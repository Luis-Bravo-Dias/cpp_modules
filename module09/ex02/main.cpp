/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:25:12 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/15 17:10:07 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Wrong number of paramters" << std::endl;
	}
	std::vector<int> vec;
	int	i = 1;
	while (i < ac)
	{
		std::string sNbr = av[i];
		if(sNbr.find_first_not_of("0123456789") != sNbr.npos)
		{
			std::cout << "Error: Enter only valid numbers" << std::endl;
			return (1);
		}
		vec.push_back(std::atoi(sNbr.c_str()));
	}
	return (0);
}