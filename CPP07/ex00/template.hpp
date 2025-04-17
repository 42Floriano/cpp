/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:18:14 by falberti          #+#    #+#             */
/*   Updated: 2025/04/15 13:41:08 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

# include <iostream>
# include <cstdio>

template <class MyType>
void swap(MyType& a, MyType& b){
    MyType tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

template <class MyType>
MyType const & max_t(MyType const & a, MyType const & b){
    return (a >= b ? a : b);
}

template <class MyType>
MyType const & min_t(MyType const & a, MyType const & b){
    return (a >= b ? b : a);
}

#endif