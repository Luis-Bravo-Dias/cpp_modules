/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:51:37 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/30 16:47:33 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal* farm[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			farm[i] = new Cat;
		else
			farm[i] = new Dog;
	}
	std::cout << "first element of farm is a " << farm[0]->getType() << " and last is a " << farm[9]->getType() << std::endl;

	for (size_t i = 0; i < 10; i++)
		delete farm[i];
	
	
	Dog	*Max = new Dog();

	Max->setIdea("bife", 0);

	std::cout << Max->getType() << " 1: " << Max->getIdea(0) << std::endl;

	Dog *Mel = new Dog();
	
	*Mel = *Max;

	delete Max;

	std::cout << Mel->getType() << " 2: " << Mel->getIdea(0) << std::endl;

	delete Mel;
		
	//************** SUBJECT TESTS *********************

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
	
// 	return 0;
// }