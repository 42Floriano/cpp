#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include <iostream>

int main() {
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
    
    return 0;
}
