/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:49 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/17 11:51:23 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
        std::cout << "Error: could not open file." << std::endl;
    else
    {
        std::ifstream input;
        input.open(av[1]);
        if (input.is_open())
            btc(input);
        else
            std::cout << "Error: could not open file." << std::endl;
        input.close();
    }
    return (0);
}