/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 15:09:06 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, unsigned int energy, unsigned int attack) : _name(name), _hp(hp), _energy(energy), _attack(attack)
{
	std::cout << "World Boss constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& value)
    : _name(value._name), _hp(value._hp), _energy(value._energy), _attack(value._attack) {
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    if (this != &rhs) { // Check for self-assignment
        this->_name = rhs._name;
        this->_hp = rhs._hp;
        this->_energy = rhs._energy;
        this->_attack = rhs._attack;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

//Methodes
void	ClapTrap::attack(const std::string &target)
{
	if (this->getEnergy() > 0)
	{
		std::cout << this->getName() << " attacks " << target << " for " << this->getAttack() << " damages " << std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else 
		std::cout << "Not enough energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if (this->getHp() > 0)
	{
		std::cout << this->getName() << " recieves " <<  ammount << " damages " << std::endl;
		this->setHp(this->getHp() - ammount);
		if (this->getHp() < 0)
			this->setHp(0);
	}
	else std::cout << this->getName() << " is dead already!" << std::endl;
}

void	ClapTrap::heal(unsigned int ammount)
{
	if (this->getEnergy() > 0)
	{
		std::cout << this->getName() << " uses auto-heal for " << ammount << " HP " << std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else 
		std::cout << "Not enough energy" << std::endl;

}

// Getter
std::string 	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->_energy);
}

int	ClapTrap::getHp() const
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

void ClapTrap::setHp(int hp)
{
	this->_hp = hp;
}

void ClapTrap::setAttack(unsigned int attack)
{
	this->_attack = attack;
}
