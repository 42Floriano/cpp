/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 12:39:32 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _energy(10), _hp(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int energy, unsigned int hp, unsigned int attack) : _name(name), _energy(energy), _hp(hp), _attack(attack)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& value) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    //std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {        // Check for self-assignment
        this->_name = rhs.getName();
		this->_hp = rhs.getAttack();
		this->_energy = rhs.getHp();
		this->_attack = rhs.getAttack();// Copy new value
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

//Methodes


// Getter
std::string 	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getHp() const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getAttack() const
{
	return (this->_attack);
}

// Setter
void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setEnergy(unsigned int energy)
{
	this->_energy = energy;
}

void ClapTrap::setHp(unsigned int hp)
{
	this->_hp = hp;
}

void ClapTrap::setAttack(unsigned int attack)
{
	this->_attack = attack;
}

// Overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const ClapTrap& ClapTrap) {
    os << ClapTrap.getName();
    return os; // Return the output stream for chaining
}
