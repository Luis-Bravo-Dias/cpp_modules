/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:15:03 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 11:15:23 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		
		void attack(const std::string &target);
		void guardGate(void);
};

#endif