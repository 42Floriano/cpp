/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:30 by falberti          #+#    #+#             */
/*   Updated: 2024/11/20 10:19:45 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fractional_bits = 8;


// Default constructor
Fixed::Fixed(void) : _fix_point_value(0) {
    //std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(int value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_fix_point_value = value << _fractional_bits; //convert integer to fixed-point
}

// Float constructor
Fixed::Fixed(float value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fix_point_value = roundf(value * (1 << _fractional_bits)); //convert float to fixed-point
}

// Copy constructor
Fixed::Fixed(const Fixed& value) : _fix_point_value(0) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& rhs) {
    //std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {        // Check for self-assignment
        this->_fix_point_value = rhs.getRawBits(); // Copy new value
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

//Methodes
float Fixed::toFloat( void ) const
{
    return static_cast<float>(_fix_point_value) / (1 << _fractional_bits);
}

int Fixed::toInt( void ) const
{
    return _fix_point_value >> _fractional_bits;
}

int Fixed::operator>(Fixed const &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<(Fixed const &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(Fixed const &rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(Fixed const &rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return((1));
	return (0);
}

int Fixed::operator==(Fixed const &rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(Fixed const &rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() + rhs.toFloat());
	return ret;
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() - rhs.toFloat());
	return ret;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() * rhs.toFloat());
	return ret;
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() / rhs.toFloat());
	return ret;
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (old);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (old);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

// Getter
int Fixed::getRawBits() const {
    //std::cout << "getRawBits called" << std::endl;
    return (this->_fix_point_value);
}

// Setter
void Fixed::setRawBits(int const raw) {
    //std::cout << this->_fractional_bits << " setRawBits called" << std::endl;
    this->_fix_point_value = raw;
}

// Overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    // Use the toFloat() method to get the floating-point representation
    os << fixed.toFloat();
    return os; // Return the output stream for chaining
}
