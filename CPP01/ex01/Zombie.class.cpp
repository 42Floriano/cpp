/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:46:22 by albertini         #+#    #+#             */
/*   Updated: 2024/11/13 19:04:56 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(void) : _name("Carl")
{
	std::cout << this->get_name() << " the zombie is born!" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->get_name() << " the zombie is born!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << " the zombie is dying!" << std::endl;
}

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}

void		Zombie::set_name(std::string str)
{
	this->_name = str;
}

void Zombie::announce() const
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
