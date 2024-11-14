/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:19:37 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 16:18:33 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
    std::cout << "Human B: " << this->_name << " has popped" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Human B: " << this->_name << " has been killed " << std::endl;
}

void    HumanB::set_name(std::string name)
{
    this->_name = name;
}
std::string HumanB::get_name(void)
{
    return (this->_name);
}

void        HumanB::set_weapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (this->_weapon != NULL)
        std::cout << this->get_name() << " attacks with " << this->_weapon->get_type() << std::endl;
    else 
        std::cout << this->get_name() << " attacks without weapon!" << std::endl;
}
