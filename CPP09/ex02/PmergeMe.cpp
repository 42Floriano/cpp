/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:37:03 by floriano          #+#    #+#             */
/*   Updated: 2025/07/02 13:34:35 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe& other){
    (void) other;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& rhs){
    if (this != &rhs){

    }
    return *this;
}
PmergeMe::~PmergeMe(){}

void PmergeMe::solve(std::vector<int>& vec){
    std::set<int> seen;
    for (size_t i = 0; i < vec.size(); i++){
        if(!seen.insert(vec[i]).second)
            throw std::runtime_error("Error: duplicate number detected");
    }
    mergeInsertSort(vec, 0, vec.size() - 1);
}

void PmergeMe::solve(std::deque<int>& deq){
    std::set<int> seen;
    for (size_t i = 0; i < deq.size(); i++){
        if(!seen.insert(deq[i]).second)
            throw std::runtime_error("Error: duplicate number detected");
    }
    mergeInsertSort(deq, 0, deq.size() - 1);
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec, int left, int right){
    //if vec is shorter than size 10 directly user insertionSort
    if (right - left <= 10){
        insertionSort(vec, left, right);
        return ;
    }
    int mid = (left + right) / 2;
    mergeInsertSort(vec, left, mid);
    mergeInsertSort(vec, mid + 1, right);
    merge(vec, left, mid, right);
}

void PmergeMe::mergeInsertSort(std::deque<int>& deq, int left, int right){
    //if deq is shorter than size 10 directly user insertionSort
    if (right - left <= 10){
        insertionSort(deq, left, right);
        return ;
    }
    int mid = (left + right) / 2;
    mergeInsertSort(deq, left, mid);
    mergeInsertSort(deq, mid + 1, right);
    merge(deq, left, mid, right);
}

void PmergeMe::insertionSort(std::vector<int>& vec, int left, int right){
    for (int i = left + 1; i <= right; ++i){
        int key = vec[i];
        int j = i - 1;
        while (j >= left && vec[j] > key){
            vec[j + 1] = vec[j];
            --j;            
        }
        vec[j + 1] = key;
    }
}

void PmergeMe::insertionSort(std::deque<int>& deq, int left, int right){
    for (int i = left + 1; i <= right; ++i){
        int key = deq[i];
        int j = i - 1;
        while (j >= left && deq[j] > key){
            deq[j + 1] = deq[j];
            --j;            
        }
        deq[j + 1] = key;
    }
}

void PmergeMe::merge(std::vector<int>& vec, int left, int mid, int right){
    std::vector<int> temp;
    int i = left, j = mid + 1;
    while (i <= mid && j <= right){
        if (vec[i] <= vec[j])
            temp.push_back(vec[i++]);
        else
            temp.push_back(vec[j++]);
    }
    while (i <= mid)
        temp.push_back(vec[i++]);
    while (j <= right)
        temp.push_back(vec[j++]);
    for(int k = left; k <= right; ++k)
        vec[k] = temp[k - left];
}

void PmergeMe::merge(std::deque<int>& deq, int left, int mid, int right){
    std::deque<int> temp;
    int i = left, j = mid + 1;
    while (i <= mid && j <= right){
        if (deq[i] <= deq[j])
            temp.push_back(deq[i++]);
        else
            temp.push_back(deq[j++]);
    }
    while (i <= mid)
        temp.push_back(deq[i++]);
    while (j <= right)
        temp.push_back(deq[j++]);
    for(int k = left; k <= right; ++k)
        deq[k] = temp[k - left];
}
