/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:27:54 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 15:58:20 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		// void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif