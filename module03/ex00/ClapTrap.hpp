/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:28:27 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/22 16:06:02 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int _HP;
	int _EP;
	int _attack;
};

#endif