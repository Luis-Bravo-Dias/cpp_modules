/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:07:11 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/14 11:41:29 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource(void);
		
		MateriaSource &operator=(MateriaSource const &rhs);

		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const & type);
	
	private:
		AMateria	*_mind[4];
};

#endif