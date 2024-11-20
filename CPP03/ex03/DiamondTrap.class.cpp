/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 15:09:06 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

Diamond::Diamond(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	std::cout << "Diamond constructor called" << std::endl;
}

// Copy constructor
Diamond::Diamond(const Diamond& other)
    :  ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
    std::cout << "Diamond Copy constructor called" << std::endl;
}

// Assignment operator
Diamond& Diamond::operator=(const Diamond& rhs) {
    if (this != &rhs) { 
		ClapTrap::operator=(rhs);
        _name = rhs._name;
		std::cout << "Diamond Assigment oparator called" << std::endl;
    }
    return *this;
}

// Destructor
Diamond::~Diamond() {
    std::cout << "Diamond Destructor called" << std::endl;
}

//Methodes

void Diamond::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void Diamond::whoAmI() {
    std::cout << "I am DiamondTrap: " << this->_name
              << " and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}
