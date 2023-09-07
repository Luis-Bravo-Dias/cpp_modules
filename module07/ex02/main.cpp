/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:14:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/07 16:54:15 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> empty;
	std::cout << "The size of empty is " << empty.size() << std::endl << std::endl;
	
	Array<int> arr(5);
    try
    {
    	for (int i = 0; i < static_cast<int>(arr.size()); i++)
    	{
    	    arr[i] = i * 10;
    	}
	
    	for (int i = 0; i < static_cast<int>(arr.size()); i++)
    	{
    	    std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    	}
        int value = arr[3];
        std::cout << "The value is " << value << std::endl;
		value = arr[10];
        std::cout << "The value is " << value << std::endl;
	}
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

	std::cout << std::endl;

	Array<std::string> test(6);
	
		std::cout << "test has a size of " << test.size() << std::endl;
		try {
			test[0] = "ola";
			test[1] = "alo";
			test[2] = "hi";
			test[3] = "hey";
			test[4] = "wassup";
			test[5] = "yo";
			for (int i = 0; i < test.size(); i++)
				std::cout << "test[" << i << "] = " << test[i] << std::endl;
			
			std::string salutation = test[4];
			std::cout << "Sally says: " << salutation << std::endl;
			salutation = test[30];
			std::cout << "Josh says: " << salutation << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

    return 0;
}

