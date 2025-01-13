/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:31 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 10:46:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

//Constructors
Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &value) : Animal(value)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog desrtuctor called" << std::endl;
}

//methods
void    Dog::makeSound(void) const 
{
    std::cout << "Woof woof!" << std::endl;
}
