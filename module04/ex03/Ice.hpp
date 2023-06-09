/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:31:12 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/09 18:27:36 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "Materia.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		Ice &operator=(Ice const &rhs);

		virtual void use(ICharacter &target);
		virtual Ice *clone() const;
};

#endif