/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2025/01/13 15:37:58 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.class.hpp"


int main() {
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.incrGrade();
        std::cout << bob << std::endl;

        bob.incrGrade();  // This should throw an exception
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;

        alice.decrGrade();  // This should throw an exception
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	try {
        Bureaucrat avdu("Avdu", 151);
        std::cout << avdu << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}