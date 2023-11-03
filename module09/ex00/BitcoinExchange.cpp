/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/03 17:02:48 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int not_valid(std::ifstream &input)
{
    std::string line;
    std::getline(input, line);
    while (std::getline(input, line))
    {
        std::string year = line.substr(0, 4);
        std::string month = line.substr(5, 2);
        std::string day = line.substr(8, 2);
        // for (int i = 0; line[i]; i++)
        //     std::cout << "teste : " << line[i] << std::endl;
    }
    return (0);
}