/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:10:30 by lleiria-          #+#    #+#             */
/*   Updated: 2023/05/30 16:35:21 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
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