/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/06 16:01:15 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int valid_format(std::string line)
{
    if ((line[0] >= '0' || line[0] <= '2') && (line[1] == '0') && (line[2] >= '0' || line[2] <= '2')
        && (line[3] >= '0' || line[3] <= '9') && (line[4] == '-') && (line[5] == '0' || line[5] == '1')
        && (line[6] >= '0' || line[6] <= '9') && (line[7] == '-') && (line[8] == '0' || line[8] == '3')
        && (line[9] >= '0' || line[9] <= '9') && (line[10] == ' ') && (line[11] >= '|') && (line[12] == ' ')
        && ((line[13] >= '0' || line[13] <= '9') || line[13] == '-'))
        return (0);
    else
        return (1);
}

int valid_date(std::string line)
{
    std::string year = line.substr(0, 4);
    std::string month = line.substr(5, 2);
    std::string day = line.substr(8, 2);
}

int not_valid(std::ifstream &input)
{
    std::string line;
    std::getline(input, line);
    while (std::getline(input, line))
    {
        if (!valid_format(line))
        {
            if (!valid_date(line))
                ;
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    return (0);
}