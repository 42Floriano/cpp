// PmergeMe.cpp — Ford-Johnson Style Merge-Insertion Sort (C++98-compatible)
#include "PmergeMe.hpp"

// Canonical form
PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) {
    (void)other;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
    if (this != &rhs) {
        // no internal state to copy
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

// Solve using vector
void PmergeMe::solve(std::vector<int>& vec) {
    std::set<int> seen;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (!seen.insert(vec[i]).second)
            throw std::runtime_error("Error: duplicate number detected");
    }
    fordJohnsonSort(vec);
}

// Solve using deque
void PmergeMe::solve(std::deque<int>& deq) {
    std::set<int> seen;
    for (size_t i = 0; i < deq.size(); ++i) {
        if (!seen.insert(deq[i]).second)
            throw std::runtime_error("Error: duplicate number detected");
    }
    fordJohnsonSort(deq);
}

bool PmergeMe::pairMaxCompare(const std::pair<int, int>& a, const std::pair<int, int>& b){
	return a.second < b.second;
}

void PmergeMe::recursiveSort(std::vector<int>& vec){
	if (vec.size() <= 1)
		return ;
	fordJohnsonSort(vec);
}

void PmergeMe::recursiveSort(std::deque<int>& deq){
	if (deq.size() <= 1)
		return ;
	fordJohnsonSort(deq);
}

// Ford-Johnson style hybrid sort (vector)
void PmergeMe::fordJohnsonSort(std::vector<int>& vec){
	if (vec.size() <= 1)
		return ;
	std::vector<std::pair<int, int> > pairs;
	int dummy = -1;
	size_t i = 0;
	while (i + 1 < vec.size()){
		int a = vec[i];
		int b = vec[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(b, a));
		else 
			pairs.push_back(std::make_pair(a, b));
		i += 2;
	}
	if (i < vec.size())
		dummy = vec[i];
	std::sort(pairs.begin(), pairs.end(), pairMaxCompare);
	std::vector<int> mainChain;
	for (size_t j = 0; j < pairs.size(); j++)
		mainChain.push_back(pairs[j].second);
	recursiveSort(mainChain);
	for (size_t j = 0; j < pairs.size(); j++){
		if (pairs[j].first != pairs[j].second){
			std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pairs[j].first);
			mainChain.insert(pos, pairs[j].first);
		}
	}
	if (dummy != -1){
		std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), dummy);
		mainChain.insert(it, dummy);
	}
	vec = mainChain;
}

// Ford-Johnson style hybrid sort (deque)
void PmergeMe::fordJohnsonSort(std::deque<int>& deq) {
	if (deq.size() <= 1)
		return ;
	std::deque<std::pair<int, int> > pairs;
	int dummy = -1;
	size_t i = 0;
	while (i + 1 < deq.size()){
		int a = deq[i];
		int b = deq[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(b, a));
		else 
			pairs.push_back(std::make_pair(a, b));
		i += 2;
	}
	if (i < deq.size())
		dummy = deq[i];
	std::sort(pairs.begin(), pairs.end(), pairMaxCompare);
	std::deque<int> mainChain;
	for (size_t j = 0; j < pairs.size(); j++)
		mainChain.push_back(pairs[j].second);
	recursiveSort(mainChain);
	for (size_t j = 0; j < pairs.size(); j++){
		if (pairs[j].first != pairs[j].second){
			std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), pairs[j].first);
			mainChain.insert(pos, pairs[j].first);
		}
	}
	if (dummy != -1){
		std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), dummy);
		mainChain.insert(it, dummy);
	}
	deq = mainChain;
}
