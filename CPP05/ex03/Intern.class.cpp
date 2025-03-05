/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:59:35 by floriano          #+#    #+#             */
/*   Updated: 2025/03/05 18:33:05 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern(){};
Intern::Intern(const Intern& other){(void)other;};
Intern& Intern::operator=(const Intern& rhs){(void)rhs; return *this;};
Intern::~Intern(){
    std::cout << "Destructor called" << std::endl;
}

AForm* createShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* createPresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target){
    std::string formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*formCreators[3])(std::string) = {createShrubbery, createRobotomy, createPresidential};
    
    for(int i= 0; i < 3; i++){
        if (formName == formTypes[i]){
            std::cout << "Intern creates" << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cout << "Error: Intern could not find form type" << formName << std::endl;
    return NULL;
}
