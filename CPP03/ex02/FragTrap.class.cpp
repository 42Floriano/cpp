/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 16:08:39 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag")
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}


// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    if (this != &rhs) 
	{
       ClapTrap::operator=(rhs);
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

//Methodes
void	FragTrap::highFivesGuys(void)
{
		std::cout << this->getName() << " High Fives his team mate" << std::endl;
}
