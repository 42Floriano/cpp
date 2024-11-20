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

Diamond::Diamond(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Diamond::Diamond(const Diamond& value)
    : _name(value._name), _hp(value._hp), _energy(value._energy), _attack(value._attack) {
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator
Diamond& Diamond::operator=(const Diamond& rhs) {
    if (this != &rhs) { // Check for self-assignment
        this->_name = rhs._name;
        this->_hp = rhs._hp;
        this->_energy = rhs._energy;
        this->_attack = rhs._attack;
    }
    return *this;
}

// Destructor
Diamond::~Diamond() {
    std::cout << "Destructor called" << std::endl;
}

//Methodes

