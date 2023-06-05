/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:23:26 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/05 17:37:04 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat	const &src);
		virtual ~Cat(void);
		
		Cat &operator=(Cat const &rhs);

		virtual void makeSound(void) const;
		virtual std::string	getType(void) const;
		std::string getIdea(int i);
		void setIdea(std::string idea, int i);

	private:
		Brain *_brain;
};

#endif