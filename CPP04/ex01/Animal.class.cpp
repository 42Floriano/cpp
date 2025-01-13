/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 23:15:23 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

//Constructors
Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& value) : _type(value._type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal desrtuctor called" << std::endl;
}

//methods
void    Animal::makeSound(void) const
{
    std::cout << "Animal makes some wierd noise! " << std::endl;
}

//Getters & setters
std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::setType(std::string type)
{
    this->_type = type;
}