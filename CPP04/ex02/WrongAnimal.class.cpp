/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 10:29:48 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

//Constructors
WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& value) : _type(value._type)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal desrtuctor called" << std::endl;
}

//methods
void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makes some wierd noise! " << std::endl;
}

//Getters & setters
std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}