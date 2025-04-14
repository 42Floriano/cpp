/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:15 by floriano          #+#    #+#             */
/*   Updated: 2025/03/25 13:58:51 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"
#include "Bureaucrat.class.hpp"
#include <iostream>

int main() {
    std::cout << "--- Testing Intern Form Creation ---" << std::endl;
    
    Intern intern;
    Bureaucrat boss("Boss", 150);
    
    // Valid forms
    AForm* form1 = intern.makeForm("shrubbery creation", "Garden");
    AForm* form2 = intern.makeForm("robotomy request", "Bender");
    AForm* form3 = intern.makeForm("presidential pardon", "Marvin");
    AForm* invalidForm = intern.makeForm("invalid form", "Nobody");
    
    std::cout << "\n--- Signing and Executing Valid Forms ---" << std::endl;
    if (form1) {
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    }
    if (form2) {
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    }
    if (form3) {
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    }
    
    std::cout << "\n--- Handling Invalid Form ---" << std::endl;
    if (!invalidForm) {
        std::cout << "Intern could not create the requested invalid form." << std::endl;
    }
    
    return 0;
}
