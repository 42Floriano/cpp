/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/19 15:09:10 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_ic = 8;

// Default constructor
Fixed::Fixed() : _i(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) : _i(0) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other) {        // Check for self-assignment
        this->_i = other.getRawBits(); // Copy new value
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Getter for raw bits
int Fixed::getRawBits() const {
    std::cout << "getRawBits called" << std::endl;
    return (this->_i);
}

// Setter for raw bits
void Fixed::setRawBits(int const raw) {
    std::cout << this->_ic << "setRawBits called" << std::endl;
    this->_i = raw;
}
