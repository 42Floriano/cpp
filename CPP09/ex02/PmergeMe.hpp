#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <deque>
#include <vector>
#include <sys/time.h>
#include <stdexcept>

class PmergeMe {
	private:

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe();

		void solve(std::vector<int>& vec);
		void solve(std::deque<int>& dec);
};

#endif 
