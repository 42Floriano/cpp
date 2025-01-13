/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:35 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 23:36:08 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

//Constructors
WrongCat::WrongCat(void) : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &value) : WrongAnimal(value)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat desrtuctor called" << std::endl;
}

//methods

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat makes some Meooow! " << std::endl;
}
