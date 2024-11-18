/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/18 23:18:04 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

// Default constructor
Fixed::Fixed() : _ic(8), _i(new int(0)) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) : _ic(8), _i(new int(*other._i)) {
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other) {        // Check for self-assignment
        delete _i;               // Free old memory
        _i = new int(*other._i); // Copy new value
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    delete _i; // Free dynamically allocated memory
    std::cout << "Destructor called" << std::endl;
}

// Getter for raw bits
int Fixed::getRawBits() const {
    std::cout << "getRawBits called" << std::endl;
    return (*_i);
}

// Setter for raw bits
void Fixed::setRawBits(int const raw) {
    std::cout << this->_ic << "setRawBits called" << std::endl;
    *_i = raw;
}
