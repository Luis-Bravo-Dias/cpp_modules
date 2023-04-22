/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/22 16:31:59 by lleiria-         ###   ########.fr       */
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

		void	attack();
	
	private:
		std::string _name;
		Weapon	&_weapon;
};


#endif