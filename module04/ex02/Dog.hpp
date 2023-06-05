/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:20:35 by lleiria-          #+#    #+#             */
/*   Updated: 2023/06/05 17:20:43 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog	const &src);
		virtual ~Dog(void);
		
		Dog &operator=(Dog const &rhs);

		virtual void makeSound(void) const;
		virtual std::string	getType(void) const;
		std::string getIdea(int i);
		void setIdea(std::string idea, int i);
	
	private:
		Brain *_brain;
};

#endif