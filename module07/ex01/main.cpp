/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:18:19 by lleiria-          #+#    #+#             */
/*   Updated: 2023/09/04 16:20:35 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    // double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    // char charArray[] = {'H', 'e', 'l', 'l', 'o'};

    std::cout << "Integer array: ";
    iter(intArray, 5, printArray);

    return 0;
}