/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:49 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/08 16:11:12 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
        std::cout << "Wrong number of paramters" << std::endl;
    else
    {
        std::ifstream input;
        input.open(av[1]);
        if (input.is_open())
        {
            if (not_valid(input))
            {
                std::cout << "Input file not valid" << std::endl;
                return (0);
            }
        }
        input.close();
    }
    return (0);
}