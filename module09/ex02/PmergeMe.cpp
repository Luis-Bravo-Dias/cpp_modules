/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:59 by lleiria-          #+#    #+#             */
/*   Updated: 2023/11/16 17:46:11 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// long long	get_time(void)
// {
// 	struct timeval	tv;
// 	long long		time;

// 	gettimeofday(&tv, NULL);
// 	time = tv.tv_sec * 1000 + tv.tv_usec / 1000;
// 	return (time);
// }

void	insertVec(std::vector<int>& vec, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int	key = vec[i];
		int j = i - 1;
		while(j >= left && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j = j - 1;
		}
		vec[j + 1] = key;
	}
}

void mergeVec(std::vector<int>& vec, int left, int mid, int right)
{
	int	n1 = mid - left + 1;
	int	n2 = right - mid;
	std::vector<int> l(n1);
	std::vector<int>r(n2);


	for(int i = 0; i < n1; ++i)
		l[i] = vec[left + i];
	for (int j = 0; j < n2; ++j)
		r[j] = vec[mid + 1 + j];
	std::vector<int>::iterator it = vec.begin() + left;
	std::merge(l.begin(), l.end(), r.begin(), r.end(), it);

	// int i = 0;
	// int j = 0;
	// int k = 0;
	// while (i < n1 && j < n2)
	// {
	// 	if (l[i] <= r[j])
	// 	{
	// 		vec[k] = l[i];
	// 		++i;
	// 	}
	// 	else
	// 	{
	// 		vec[k] = r[j];
	// 		++j;
	// 	}
	// 	++k;
	// }
	// while (i < n1)
	// {
	// 	vec[k] = l[i];
	// 	++i;
	// 	++k;
	// }
	// while (j < n2)
	// {
	// 	vec[k] = r[j];
	// 	++j;
	// 	++k;
	// }
}

void	mergeInsertVec(std::vector<int>& vec, int left, int right, int limit)
{
	if (left < right)
	{
		if (right - left <= limit)
			insertVec(vec, left, right);
		else
		{
			int mid = left + (right - left) / 2;
			mergeInsertVec(vec, left, mid, limit);
			mergeInsertVec(vec, mid + 1, right, limit);
			mergeVec(vec, left, mid, right);
		}
	}
}

void insertDeque(std::deque<int>& deq, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = deq[i];
        int j = i - 1;
        while (j >= left && deq[j] > key)
		{
            deq[j + 1] = deq[j];
            j = j - 1;
        }
        deq[j + 1] = key;
    }
}

void mergeDeque(std::deque<int>& deq, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::deque<int> l(n1);
    std::deque<int> r(n2);

	for (int i = 0; i < n1; ++i)
		l[i] = deq[left + i];
	for (int j = 0; j < n2; ++j)
		r[j] = deq[mid + 1 + j];

	std::deque<int>::iterator it = deq.begin() + left;
	std::merge(l.begin(), l.end(), r.begin(), r.end(), it);

    // int i = 0;
    // int j = 0;
    // int k = 0;

    // while (i < n1 && j < n2)
	// {
    //     if (l[i] <= r[j]) {
    //         deq[k] = l[i];
    //         ++i;
    //     } else {
    //         deq[k] = r[j];
    //         ++j;
    //     }
    //     ++k;
    // }

    // while (i < n1)
	// {
    //     deq[k] = l[i];
    //     ++i;
    //     ++k;
    // }

    // while (j < n2)
	// {
    //     deq[k] = r[j];
    //     ++j;
    //     ++k;
    // }
}

void mergeInsertDeque(std::deque<int>& deq, int left, int right, int limit)
{
    if (left < right) {
        if (right - left <= limit)
            insertDeque(deq, left, right);
        else {
            int mid = left + (right - left) / 2;
            mergeInsertDeque(deq, left, mid, limit);
            mergeInsertDeque(deq, mid + 1, right, limit);
            mergeDeque(deq, left, mid, right);
        }
    }
}

void measureTimeVec(std::vector<int>& vec, int left, int right, int limit)
{
    clock_t startTime = clock();

    mergeInsertVec(vec, left, right, limit);

    clock_t endTime = clock();

    double elapsedTime = (static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC) * 1000 ;
	
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << elapsedTime << " ms" << std::endl;
}

void measureTimeDeque(std::deque<int>& deq, int left, int right, int limit)
{
    clock_t startTime = clock();

    mergeInsertDeque(deq, left, right, limit);

    clock_t endTime = clock();

    double elapsedTime = (static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC) * 1000;

    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << elapsedTime << " ms" << std::endl;
}
