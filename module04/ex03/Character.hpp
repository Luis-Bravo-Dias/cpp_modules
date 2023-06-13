/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:24:59 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/13 16:47:23 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const &src);
		virtual ~Character();

		Character &operator=(Character const &rhs);
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
	private:
		Character(void);
		std::string _name;
		AMateria *_inventory[4];
};

#endif