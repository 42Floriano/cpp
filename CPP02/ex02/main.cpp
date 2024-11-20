/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 10:20:21 by albertini        ###   ########.fr       */
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
