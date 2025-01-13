/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:31 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:19:42 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

//Constructors
Dog::Dog(void) : Animal(), _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain)) {
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Dog Assignment Operator called" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs); // Call base class assignment operator
        delete this->_brain;    // Free existing Brain
        this->_brain = new Brain(*rhs._brain); // Deep copy
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
}

//methods
void    Dog::makeSound(void) const 
{
    std::cout << "Woof woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
    _brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
    return _brain->getIdea(index);
}
