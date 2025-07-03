#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <set>
#include <sys/time.h>
#include <iostream>
#include <utility> // for pair
#include <stdexcept>

#include <algorithm> // for std::lower_bound

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& rhs);
    ~PmergeMe();

    void solve(std::vector<int>& vec);
    void solve(std::deque<int>& deq);

private:
    static bool pairMaxCompare(const std::pair<int, int>& a, const std::pair<int, int>& b);
    void recursiveSort(std::vector<int>& vec);
    void recursiveSort(std::deque<int>& deq);
    void fordJohnsonSort(std::vector<int>& vec);
    void fordJohnsonSort(std::deque<int>& deq);
};

#endif // PMERGEME_HPP