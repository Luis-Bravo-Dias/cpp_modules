/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:50:02 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 13:00:57 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// 	Character *Bob = new Character("Bob");
	
// }

int main()
{
	IMateriaSource* oldsrc = new MateriaSource();
	AMateria* test = NULL;
	oldsrc->learnMateria(test);
	oldsrc->learnMateria(new Ice());
	oldsrc->learnMateria(new Cure());
	oldsrc->learnMateria(new Ice());
	oldsrc->learnMateria(new Cure());
	oldsrc->learnMateria(new Cure());

	IMateriaSource* src = new MateriaSource(*(MateriaSource*)oldsrc);

	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("rainbow power");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	ICharacter* charles = new Character(*(Character*)me);
	std::cout << "slot 0" << std::endl;
	charles->use(0, *bob);
	std::cout << "slot 1" << std::endl;
	charles->use(1, *bob);
	std::cout << "slot 2" << std::endl;
	charles->use(2, *bob);
	std::cout << "slot 3" << std::endl;
	charles->use(3, *bob);
	std::cout << "slot 4?" << std::endl;
	charles->use(4, *bob);

	delete bob;
	delete charles;
	delete me;
	delete src;
	delete oldsrc;
	return 0;
}