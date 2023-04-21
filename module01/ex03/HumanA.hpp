/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/21 17:59:34 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		
		std::string getName() const&;
		void	setName(std::string name);
		Weapon	getWeapon() const&;
		void	setWeapon(Weapon &weapon);
		void	atack();
	
	private:
		std::string _name;
		Weapon	&_weapon
};


#endif