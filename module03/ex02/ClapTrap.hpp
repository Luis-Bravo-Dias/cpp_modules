/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:21:15 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 10:22:08 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		ClapTrap(void);

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	protected:
		std::string _name;
		int _HP;
		int _EP;
		int _attack;
};

#endif