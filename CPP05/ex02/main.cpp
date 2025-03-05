/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:15 by floriano          #+#    #+#             */
/*   Updated: 2025/03/05 17:48:17 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include <iostream>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Ensure randomness for RobotomyRequestForm

    std::cout << "--- Testing Bureaucrat and Form Execution ---" << std::endl;
    
    try {
        Bureaucrat bureaucrat("Alice", 1);
        ShrubberyCreationForm shrubForm("home");
        RobotomyRequestForm robotForm("Bender");
        PresidentialPardonForm pardonForm("Marvin");
        
        std::cout << bureaucrat << std::endl;
        std::cout << shrubForm << std::endl;
        std::cout << robotForm << std::endl;
        std::cout << pardonForm << std::endl;
        
        bureaucrat.signForm(shrubForm);
        bureaucrat.signForm(robotForm);
        bureaucrat.signForm(pardonForm);
        
        std::cout << "\nExecuting forms:" << std::endl;
        bureaucrat.executeForm(shrubForm);
        bureaucrat.executeForm(robotForm);
        bureaucrat.executeForm(pardonForm);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing Execution with Low-Grade Bureaucrat ---" << std::endl;
    try {
        Bureaucrat lowBureaucrat("Bob", 50);
        PresidentialPardonForm pardonForm("Ford Prefect");
        
        std::cout << lowBureaucrat << std::endl;
        std::cout << pardonForm << std::endl;
        
        lowBureaucrat.signForm(pardonForm);
        lowBureaucrat.executeForm(pardonForm); // Should fail due to grade
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n--- Testing Execution Failure for Unsigned Forms ---" << std::endl;
    try {
        Bureaucrat midBureaucrat("Charlie", 20);
        RobotomyRequestForm unsignedRobotForm("TestSubject");
        
        std::cout << midBureaucrat << std::endl;
        std::cout << unsignedRobotForm << std::endl;
        
        midBureaucrat.executeForm(unsignedRobotForm); // Should fail because it's not signed
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n--- Testing Multiple Robotomy Requests for Randomness ---" << std::endl;
    try {
        Bureaucrat execBureaucrat("Dr. Zoidberg", 1);
        RobotomyRequestForm robotTest("Fry");
        
        execBureaucrat.signForm(robotTest);
        
        for (int i = 0; i < 5; i++) {  // Execute multiple times to check randomness
            std::cout << "Attempt " << i + 1 << ": ";
            execBureaucrat.executeForm(robotTest);
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
