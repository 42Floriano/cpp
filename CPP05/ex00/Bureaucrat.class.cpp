/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2025/01/13 15:43:46 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

//Constructors

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat Default constructor1 called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw GradeTooHighException();
    if (this->_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& value) : _name(value._name), _grade(value._grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if(this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat desrtuctor called" << std::endl;
}

//methods

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

void    Bureaucrat::incrGrade(void)
{
    if (this->_grade <= 1)
        throw GradeTooHighException();
    this->_grade--;
}
void    Bureaucrat::decrGrade(void)
{
    if (_grade >= 150)
        throw GradeTooLowException();
    this->_grade++;
}

//Getters & setters
const std::string& Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

// void Bureaucrat::setGrade(int grade)
// {
//     try
//     {
//         if (grade < 1 || grade > 150) {
//             throw "Grade must be between 1 (highest) and 150 (lowest)";
//         } else {
//             this->_grade = grade;
//             std::cout << "Bureaucrat grade has been set to " << this->getGrade() << " !" << std::endl;
//         }
//     }
//     catch(const char* erroMessage)
//     {
//         std::cerr << "Error : " << erroMessage << '\n';
//     }
// }

// Non-member overload of << operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
