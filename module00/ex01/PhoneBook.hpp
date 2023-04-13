/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:13:50 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/13 11:42:06 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "utils.hpp"
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search();
		int		get_index(void) const;

	private:
		static int	_index;
		Contact _contact_list[8];
		void	_display_choices(int i);
		void	_show_info(int index);
};

#endif