/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 15:54:14 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScav")
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}


// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    if (this != &rhs) 
	{ // Check for self-assignment
       ClapTrap::operator=(rhs);
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

//Methodes
void	ScavTrap::attack(const std::string &target)
{
	if (this->getEnergy() > 0)
	{
		std::cout << this->getName() << " attacks with special ScavTrap" << target << " for " << this->getAttack() << " damages " << std::endl;
		this->_energy--;
	}
	else 
		std::cout << "Not enough energy" << std::endl;
}

void	ScavTrap::guardGate(void)
{
		std::cout << this->getName() << " is now guarding the gate!" << std::endl;
}
