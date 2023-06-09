/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:10:51 by lleiria-          #+#    #+#             */
/*   Updated: 2023/04/17 10:04:40 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int  ac, char **av)
{
  int i = 1;
  
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  {
    while (i < ac)
    {
      std::string input = av[i];
      
      int c = 0;
      while (input[c])
      {
        input[c] = toupper(input[c]);
        c++;
      }
      std::cout << input;
      i++;
    }
  }
  std::cout << std::endl;
  return (0);
}
