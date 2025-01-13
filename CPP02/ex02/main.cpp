/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/21 15:22:00 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
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

// int main() {
//     std::cout << "=== Testing Constructors ===" << std::endl;
//     Fixed defaultFixed;
//     Fixed intFixed(42);
//     Fixed floatFixed(42.42f);
//     Fixed copyFixed(floatFixed);

//     std::cout << "Default: " << defaultFixed << std::endl;
//     std::cout << "Int: " << intFixed << std::endl;
//     std::cout << "Float: " << floatFixed << std::endl;
//     std::cout << "Copy: " << copyFixed << std::endl;

//     std::cout << "\n=== Testing Assignment ===" << std::endl;
//     Fixed assignFixed;
//     assignFixed = intFixed;
//     std::cout << "Assigned: " << assignFixed << std::endl;

//     std::cout << "\n=== Testing Conversions ===" << std::endl;
//     std::cout << "toFloat: " << floatFixed.toFloat() << std::endl;
//     std::cout << "toInt: " << floatFixed.toInt() << std::endl;

//     std::cout << "\n=== Testing Comparison Operators ===" << std::endl;
//     Fixed a(10);
//     Fixed b(20);
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a >= b: " << (a >= b) << std::endl;
//     std::cout << "a <= b: " << (a <= b) << std::endl;
//     std::cout << "a == b: " << (a == b) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;

//     std::cout << "\n=== Testing Arithmetic Operators ===" << std::endl;
//     std::cout << "a + b: " << (a + b) << std::endl;
//     std::cout << "a - b: " << (a - b) << std::endl;
//     std::cout << "a * b: " << (a * b) << std::endl;
//     std::cout << "a / b: " << (a / b) << std::endl;

//     std::cout << "\n=== Testing Increment/Decrement ===" << std::endl;
//     Fixed incDecTest;
//     std::cout << "Initial: " << incDecTest << std::endl;
//     std::cout << "++incDecTest: " << ++incDecTest << std::endl;
//     std::cout << "incDecTest++: " << incDecTest++ << std::endl;
//     std::cout << "After incDecTest++: " << incDecTest << std::endl;
//     std::cout << "--incDecTest: " << --incDecTest << std::endl;
//     std::cout << "incDecTest--: " << incDecTest-- << std::endl;
//     std::cout << "After incDecTest--: " << incDecTest << std::endl;

//     std::cout << "\n=== Testing Min/Max ===" << std::endl;
//     std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;
//     std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;
//     const Fixed constA(100);
//     const Fixed constB(200);
//     std::cout << "Min of constA and constB: " << Fixed::min(constA, constB) << std::endl;
//     std::cout << "Max of constA and constB: " << Fixed::max(constA, constB) << std::endl;

//     return 0;
// }
