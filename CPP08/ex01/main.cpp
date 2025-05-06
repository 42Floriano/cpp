/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:10:40 by falberti          #+#    #+#             */
/*   Updated: 2025/05/06 14:09:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // === Test 1: Subject example ===
    std::cout << "[ Test 1: Subject example ]" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    // === Test 2: Only one element (should throw) ===
    std::cout << "\n[ Test 2: Exception with one element ]" << std::endl;
    Span sp2 = Span(1);
    sp2.addNumber(42);
    try {
        sp2.shortestSpan();
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // === Test 3: Large scale test ===
    std::cout << "\n[ Test 3: Large scale test with 100,000 numbers ]" << std::endl;
    const unsigned int largeSize = 100000;
    Span bigSpan = Span(largeSize);

    std::srand(std::time(0));
    for (unsigned int i = 0; i < largeSize; ++i) {
        bigSpan.addNumber(std::rand());
    }

    std::cout << "Shortest span (large): " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Longest span (large): " << bigSpan.longestSpan() << std::endl;

    // === Test 4: Adding over capacity (should throw) ===
    std::cout << "\n[ Test 4: Over capacity exception ]" << std::endl;
    Span smallSpan = Span(3);
    smallSpan.addNumber(10);
    smallSpan.addNumber(20);
    smallSpan.addNumber(30);
    try {
        smallSpan.addNumber(40);
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}