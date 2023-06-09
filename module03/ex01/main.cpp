/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:46:43 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 10:12:51 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	st("Mario");
	ClapTrap	ct("Bowser");

	st.attack("Bowser");
	ct.takeDamage(20);
	ct.attack("Mario");
	st.guardGate();
	st.takeDamage(0);
	st.beRepaired(5);
	st.attack("Bowser");
	ct.takeDamage(20);

}