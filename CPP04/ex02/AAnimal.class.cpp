/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:29:28 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

//Constructors
AAnimal::AAnimal(void)
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& value) : _type(value._type)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal desrtuctor called" << std::endl;
}

//methods
void    AAnimal::makeSound(void) const
{
    std::cout << "AAnimal makes some wierd noise! " << std::endl;
}

//Getters & setters
std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void AAnimal::setType(std::string type)
{
    this->_type = type;
}