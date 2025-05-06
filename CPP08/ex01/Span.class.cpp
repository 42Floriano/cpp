/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:11:25 by falberti          #+#    #+#             */
/*   Updated: 2025/05/06 14:14:30 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span() : _capacity(0){}

Span::Span(unsigned int n) : _capacity(n){}

Span::Span(const Span &other) : _capacity(other._capacity), _numbers(other._numbers){}

Span &Span::operator=(const Span &rhs){
    if (this != &rhs){
        _numbers = rhs._numbers;
        _capacity = rhs._capacity;
    }
    return *this;
}

Span::~Span(){}

void Span::addNumber(unsigned int num){
    if(_numbers.size() >= _capacity)
        throw std::runtime_error("Span is full");
    _numbers.push_back(num);    
}

int Span::shortestSpan(void) const{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough elements in the vector");
    
    int res = std::numeric_limits<int>::max();
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    for (size_t i = 0; i < sorted.size() - 1; i++){
        int diff = sorted[i + 1] - sorted[i];
        if (diff < res)
                res = diff;
    }
    return res;
}

int Span::longestSpan(void) const {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough elements in the vector");
        
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

int Span::getNumber(unsigned int index){
    if (index > _numbers.size())
        throw std::out_of_range("Index out of range!");
    return _numbers[index];
}