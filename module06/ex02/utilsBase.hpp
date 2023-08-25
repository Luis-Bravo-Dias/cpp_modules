/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsBase.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:28:15 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/25 15:45:05 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILSBASE_HPP
#define UTILSBASE_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif