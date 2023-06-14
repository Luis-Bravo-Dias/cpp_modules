/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:24:37 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 15:08:25 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	
	// AAnimal test;
	
	AAnimal* farm[10];

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
	Max->setIdea("Beef", 0);
	std::cout << Max->getType() << " 1: " << Max->getIdea(0) << std::endl;
	Dog *Mel = new Dog();
	*Mel = *Max;
	delete Max;
	std::cout << Mel->getType() << " 2: " << Mel->getIdea(0) << std::endl;
	delete Mel;

	Cat *Luna = new Cat;
	Luna->setIdea("Tuna", 0);
	std::cout << Luna->getType() << " 1: " << Luna->getIdea(0) << std::endl;
	Cat *Batman = new Cat;
	*Batman = *Luna;
	delete Luna;
	std::cout << Batman->getType() << " 2: " << Batman->getIdea(0) << std::endl;
	delete Batman;
		
	//************** SUBJECT TESTS *********************

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}