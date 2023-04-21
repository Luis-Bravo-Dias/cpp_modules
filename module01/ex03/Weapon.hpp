/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:48:06 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/21 17:12:04 by lleiria-         ###   ########.fr       */
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
		std::string getType() const&;
		void	setType(std::string type);
	
	private:
		std::string	_type;
};


#endif