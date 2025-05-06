/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:11:39 by falberti          #+#    #+#             */
/*   Updated: 2025/05/06 14:11:51 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <limits>

class Span{
    private:
        unsigned int _capacity;
        std::vector<int> _numbers;
    public:
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span& rhs);
    ~Span();

    void addNumber(unsigned int n);
    template <typename It>
    void addNumber(It begin, It end){
        if (_numbers.size() + std::distance(begin, end) > _capacity)
            throw std::runtime_error("Span has not enough space !");
        _numbers.insert(_numbers.end(), begin, end);
    }
    
    int shortestSpan(void) const;
    int longestSpan(void) const;
    int getNumber(unsigned int index);
};

#endif