/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:47:21 by falberti          #+#    #+#             */
/*   Updated: 2025/05/06 15:04:36 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
#define MUTANTSTACK_CLASS_HPP

#include <stack>

// Template MutantStack class inheriting from std::stack

template<typename T>
class MutantStack : public std::stack<T>{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){}
    MutantStack(const MutantStack& other) : std::stack<T>(other){}
    MutantStack &operator=(const MutantStack& rhs){
        std::stack<T>::operator=(rhs);
        return *this;
    }
    ~MutantStack(){}
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }
};

#endif