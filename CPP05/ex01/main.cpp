#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <iostream>

int main() {
    std::cout << "--- Testing Bureaucrat and Form Creation ---" << std::endl;
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

    std::cout << "\n--- Testing Successful Signing ---" << std::endl;
    try {
        Bureaucrat highRank("Charles", 10);
        Form easyForm("Easy Form", 100, 50);
        
        std::cout << highRank << std::endl;
        std::cout << easyForm << std::endl;
        
        highRank.signForm(easyForm); // Should succeed
        std::cout << easyForm << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing Form Creation with Invalid Grades ---" << std::endl;
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
    
    std::cout << "\n--- Testing Signing with Insufficient Grade ---" << std::endl;
    try {
        Bureaucrat lowBureaucrat("Bob", 100);
        Form normalForm("Regular Form", 50, 30);
        
        std::cout << lowBureaucrat << std::endl;
        std::cout << normalForm << std::endl;
        
        lowBureaucrat.signForm(normalForm); // Should fail
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
