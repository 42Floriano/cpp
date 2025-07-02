#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <deque>
#include <vector>
#include <sys/time.h>
#include <stdexcept>
#include <set>

class PmergeMe {
	private:
		void mergeInsertSort(std::vector<int>& vec, int left, int right);
		void mergeInsertSort(std::deque<int>& deq, int left, int right);

		void insertionSort(std::vector<int>& vec, int left, int right);
		void insertionSort(std::deque<int>& deq, int left, int right);

		void merge(std::vector<int>& vec, int left, int mid, int right);
		void merge(std::deque<int>& deq, int left, int mid, int right);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe();

		void solve(std::vector<int>& vec);
		void solve(std::deque<int>& dec);
};

#endif 
