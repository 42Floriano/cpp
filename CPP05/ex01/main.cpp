/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2025/02/27 11:36:40 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat("Alice", 50);
        Form form("Important Document", 45, 30);
        
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--- Testing Boundary Conditions ---" << std::endl;
    try {
        Form invalidForm("Too High", 0, 30);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Form invalidForm("Too Low", 151, 30);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat lowBureaucrat("Bob", 100);
        Form normalForm("Regular Form", 50, 30);
        std::cout << lowBureaucrat << std::endl;
        std::cout << normalForm << std::endl;
        lowBureaucrat.signForm(normalForm);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}