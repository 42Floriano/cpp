/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:14:27 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 14:35:56 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(std::string name)
{
    set_type(name);
    std::cout << "Weapon constructor called" << std::endl;
    std::cout << "Type sets to:" << this->get_type() << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor called" << std::endl;
}

std::string Weapon::get_type(void) const
{
    return (this->_type);
}

void Weapon::set_type(std::string type)
{
    this->_type = type;
}
