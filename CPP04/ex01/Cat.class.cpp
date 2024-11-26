/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:35 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 23:14:46 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

//Constructors
Cat::Cat(void) : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &value) : Animal(value)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat desrtuctor called" << std::endl;
}

//methods
void    Cat::makeSound(void) const 
{
    std::cout << "Meoooooow! Vrooom vrooom!" << std::endl;
}
