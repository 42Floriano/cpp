/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:37:03 by floriano          #+#    #+#             */
/*   Updated: 2025/07/01 17:44:12 by floriano         ###   ########.fr       */
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

void PmergeMe::resolve(const std::string& av){
    
}