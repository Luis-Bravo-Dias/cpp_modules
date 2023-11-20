/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:29:53 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/17 12:06:24 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int valid_format(std::string line)
{
    if ((line[0] >= '0' && line[0] <= '2') &&
        (line[1] == '0') &&
        (line[2] >= '0' && line[2] <= '2') &&
        (line[3] >= '0' && line[3] <= '9') &&
        (line[4] == '-') &&
        (line[5] == '0' || line[5] == '1') &&
        (line[6] >= '0' && line[6] <= '9') &&
        (line[7] == '-') &&
        (line[8] >= '0' && line[8] <= '3') &&
        (line[9] >= '0' && line[9] <= '9') &&
        (line[10] == ' ') &&
        (line[11] == '|') &&
        (line[12] == ' ') &&
        ((line[13] >= '0' && line[13] <= '9') || line[13] == '-'))
            return 1;
        else
            return 0;
 }
bool leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0))
            return true;
    }
    return false;
}
 

int valid_date(std::string line)
{
    int year = std::atoi(line.substr(0, 4).c_str());
    int month = std::atoi(line.substr(5, 2).c_str());
    int day = std::atoi(line.substr(8, 2).c_str());

    if (year < 2009 || year > 2022)
        return (0);
    if (month > 12)
        return (0);
    if (day > 31)
        return (0);
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return (0);
    if ((leap(year) == false) && month == 2 && day > 28)
        return (0);
    if ((leap(year) == true) && month == 2 && day > 29)
        return (0);
    return(1);
}

float valid_value(std::string sValue)
{
    float   fValue = std::atof(sValue.c_str());
    if (fValue < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (0);
    }
    if (fValue > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (0);
    }
    return (fValue);
}

std::map<std::string, float> fillData(void)
{
	std::ifstream data;
    data.open("data.csv");
	std::map<std::string, float> dataMap;
	if (data.is_open())
	{
		std::string line;
    	while (std::getline(data, line))
		{
            std::string date = line.substr(0, 10);
            float   value = std::atof(line.substr(11).c_str());
			dataMap.insert(std::make_pair(date, value));
		}
	}
    data.close();
    return (dataMap);
}

void compare_data(const std::string& date, float value)
{
    std::map<std::string, float> data = fillData();
    std::map<std::string, float>::iterator it = data.upper_bound(date);
    if (it != data.begin())
    {
        --it;
        float convert = value * it->second;
        std::cout << date << " => " << value << " = " << convert << std::endl;
    }
    else
        std::cout << "No date before or on the input date found." << std::endl;
}

void btc(std::ifstream &input)
{
    std::string line;
    while (std::getline(input, line))
    {
        if (line == "date | value")
            std::getline(input, line);
        if (valid_format(line))
        {
            if (valid_date(line))
            {
				std::string date = line.substr(0, 10);
				std::string sValue = line.substr(13);
				float value = valid_value(sValue);
                if (value)
                    compare_data(date, value);
            }
            else
                std::cout << "Error: bad input => " << line << std::endl;
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
}