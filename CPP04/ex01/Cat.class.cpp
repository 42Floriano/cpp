/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:35 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:17:41 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

//Constructors
Cat::Cat(void) : Animal(), _brain(new Brain())
{
    this->_type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain)) {
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Cat Assignment Operator called" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs); // Call base class assignment operator
        delete this->_brain;    // Free existing Brain
        this->_brain = new Brain(*rhs._brain); // Deep copy
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
}

//methods
void    Cat::makeSound(void) const 
{
    std::cout << "Meoooooow! Vrooom vrooom!" << std::endl;
}

void	Cat::setIdea(int index, const std::string &idea)
{
    _brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) const
{
    return _brain->getIdea(index);
}