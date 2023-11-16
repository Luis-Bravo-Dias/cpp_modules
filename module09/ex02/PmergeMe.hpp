/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:56 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:41 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <algorithm>

void	mergeInsertVec(std::vector<int>& vec, int left, int right, int limit);
void	mergeInsertDeque(std::deque<int>& deq, int left, int right, int limit);
void	measureTimeVec(std::vector<int>& vec, int left, int right, int limit);
void	measureTimeDeque(std::deque<int>& deq, int left, int right, int limit);

#endif