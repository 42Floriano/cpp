/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:08:04 by falberti          #+#    #+#             */
/*   Updated: 2024/11/06 17:18:50 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
//#include "Phonebook.utils.hpp"

Phonebook::Phonebook(void)
{
    this->_index  = 0;
    std::cout << "Welcome to your phonebook!" << std::endl;
    return ;
}

Phonebook::~Phonebook(void)
{
    std::cout << "See you next time!" << std::endl;
    return ;
}

void    Phonebook::add(void)
{
    std::cout << "It's me, add" << std::endl;
    return;
}
void    Phonebook::search(void)
{
    std::cout << "It's me, search" << std::endl;
    return;
}