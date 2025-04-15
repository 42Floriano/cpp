/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:49:33 by falberti          #+#    #+#             */
/*   Updated: 2025/04/15 13:57:55 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_CLASS_HPP
#define TEMPLATE_CLASS_HPP

# include <iostream>

template <class MyType>

void iter(MyType* array, int length, void (*f)(MyType&)){
    for(int i = 0; i < length; i++){
        f(array[i]);
    }
}

#endif