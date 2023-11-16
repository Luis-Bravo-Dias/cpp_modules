/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:25:12 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/16 16:47:09 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Wrong number of paramters" << std::endl;
	}
	else
	{
		std::vector<int> vec;
		std::deque<int>	deq;
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
			deq.push_back(std::atoi(sNbr.c_str()));
			i++;
		}
		std::cout << "Before: ";
    	for (size_t i = 0; i < vec.size(); ++i) {
    	    std::cout << vec[i] << " ";
    	}
    	std::cout << std::endl;
		mergeInsertVec(vec, 0, vec.size() - 1, 3);
		std::cout << "After: ";
    	for (size_t i = 0; i < vec.size(); ++i) {
    	    std::cout << vec[i] << " ";
    	}
    	std::cout << std::endl;
		measureTimeVec(vec, 0, vec.size() - 1, 3);
    	measureTimeDeque(deq, 0, deq.size() - 1, 3);
	}
	return (0);
}