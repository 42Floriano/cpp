/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/21 15:21:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}

// int main() {
//     std::cout << "=== Testing Fixed Class Output ===" << std::endl;

//     // Test with integer constructor
//     Fixed fixedInt(42); // Integer converted to fixed-point
//     std::cout << "Fixed (Integer 42): " << fixedInt << std::endl;

//     // Test with floating-point constructor
//     Fixed fixedFloat(42.42f); // Float converted to fixed-point
//     std::cout << "Fixed (Float 42.42): " << fixedFloat << std::endl;

//     // Test with default constructor
//     Fixed fixedDefault; // Default constructor should initialize to 0
//     std::cout << "Fixed (Default 0): " << fixedDefault << std::endl;

//     // Test with very small float
//     Fixed fixedSmall(0.00390625f); // Smallest step for 8 fractional bits
//     std::cout << "Fixed (Small Float 0.00390625): " << fixedSmall << std::endl;

//     // Test with negative float
//     Fixed fixedNegative(-42.42f); // Negative floating-point value
//     std::cout << "Fixed (Negative Float -42.42): " << fixedNegative << std::endl;

//     // Test with large float
//     Fixed fixedLarge(12345.6789f); // Large floating-point value
//     std::cout << "Fixed (Large Float 12345.6789): " << fixedLarge << std::endl;

//     return 0;
// }