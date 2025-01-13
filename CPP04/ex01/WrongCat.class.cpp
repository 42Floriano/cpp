/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:35 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 10:40:52 by falberti         ###   ########.fr       */
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
