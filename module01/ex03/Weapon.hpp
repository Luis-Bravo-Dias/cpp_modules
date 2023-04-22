/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:06 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/22 15:15:34 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const& getType();
		void	setType(std::string type);
	
	private:
		std::string	_type;
};


#endif