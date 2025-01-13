/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:19:17 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 16:12:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "Human A: " << this->_name << " has popped with the weapon "
        << this->_weapon.get_type() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Human A: " << this->_name << " has been killed " << std::endl;
}

void    HumanA::set_name(std::string name)
{
    this->_name = name;
}
std::string HumanA::get_name(void)
{
    return (this->_name);
}

void    HumanA::attack(void)
{
    std::cout << this->get_name() << " attacks with "
        << this->_weapon.get_type() << std::endl;
}
