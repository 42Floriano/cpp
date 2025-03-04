/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:24:47 by falberti          #+#    #+#             */
/*   Updated: 2025/03/04 15:04:19 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
    if (this != &rhs)
        _target = rhs._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    if (!isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    
    std::ofstream outfile((_target + "_shrubbery").c_str());
    if (!outfile) {
        std::cerr << "Error: Could not create file." << std::endl;
        return;
    }
    outfile << "      /\" << std::endl;
    outfile << "     /  \" << std::endl;
    outfile << "    /    \" << std::endl;
    outfile << "   /      \" << std::endl;
    outfile << "  /________\" << std::endl;
    outfile.close();
    std::cout << "Shrubbery has been created in " << _target << "_shrubbery" << std::endl;
}
