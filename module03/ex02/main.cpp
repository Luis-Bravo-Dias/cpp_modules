/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:24:25 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/24 14:37:57 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap	st("Mario");
	ClapTrap	ct("Bowser");
	FragTrap	ft("Luigi");

	ct.attack("Luigi");
	ft.takeDamage(0);
	ct.beRepaired(40);
	ft.attack("Bowser");
	ct.takeDamage(30);
	st.attack("Bowser");
	ct.takeDamage(20);
	ct.attack("Mario");
	st.guardGate();
	st.takeDamage(0);
	st.beRepaired(5);
	st.attack("Bowser");
	ct.takeDamage(20);
	ft.highFivesGuys();

}