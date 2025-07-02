/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:33:52 by falberti          #+#    #+#             */
/*   Updated: 2025/07/02 13:43:22 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

//Microseconds
static long getTimeMs() {
    struct timeval tv;
    gettimeofday(&tv, 0);
    return tv.tv_sec * 1000000 + tv.tv_usec;
}

// //Nano
// static long getTimeMs(){
// 	struct timeval tv;
// 	gettimeofday(&tv, 0);
// 	return (static_cast<long long>(tv.tv_sec) * 1000000LL) + tv.tv_usec;
// }

int main(int ac, char **av){
	if (ac < 2){
		std::cerr << "Usage: ./PmergeMe \"<expression>\" " << std::endl;
		return 1;
	}
	try {
		std::vector<int> vec;
		std::deque<int> deq;
		
		for (int i = 1; i < ac; i++){
			char *end;
			long val = std::strtol(av[i], &end, 10);
			if (*end || val < 0 || val > 2147483647)
				throw std::runtime_error("Error: invalid input number");
			vec.push_back(static_cast<int>(val));
			deq.push_back(static_cast<int>(val));
			}
		std::cout << "Before: ";
		for (size_t i = 0; i < vec.size(); i++){
			std::cout << vec[i] << " ";
			}
		std::cout << std::endl;
		
		long startVec = getTimeMs();
		PmergeMe objVec;
		objVec.solve(vec);
		long endVec = getTimeMs();

		long startDeq = getTimeMs();
		PmergeMe objDeq;
		objDeq.solve(deq);
		long endDeq = getTimeMs();

		std::cout << "After: ";
		for (size_t i = 0; i < vec.size(); i++){
			std::cout << vec[i] << " ";
			}
		std::cout << std::endl;

		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << (endVec - startVec) << " microseconds" << std::endl;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << (endDeq - startDeq) << " microseconds" << std::endl;

		} catch (const std::exception& e){
			std::cerr << e.what() << std::endl;
			return 1;
		}
	return 0;
}
