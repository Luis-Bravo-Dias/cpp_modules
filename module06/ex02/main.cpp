/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:42:13 by lleiria-          #+#    #+#             */
/*   Updated: 2023/08/25 16:31:22 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilsBase.hpp"

int main(void)
{
	srand(time(NULL));
	
	Base *teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;


	teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

	teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

		teste = generate();
	identify(teste);
	identify(*teste);
	delete teste;

	return (0);
}