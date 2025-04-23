/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:11:39 by falberti          #+#    #+#             */
/*   Updated: 2025/04/23 13:23:05 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

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

    void addNumnber(int n);
    
    int shortestSpan(void);
    int longestSpan(void);
    void get
}
#endif