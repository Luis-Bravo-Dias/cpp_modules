/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:27 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 12:47:24 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		AMateria();

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &rhs);

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif