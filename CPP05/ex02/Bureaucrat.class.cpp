/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2025/03/05 17:34:28 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

//Constructors

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
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

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const {
    if (!form.isSigned()) {
        std::cout << _name << " couldn't execute " << form.getName() << " because the form is not signed." << std::endl;
        return;
    }
    try {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
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

std::ostream& Bureaucrat::print(std::ostream& os) const {
    os << _name << ", bureaucrat grade " << _grade;
    return os;
}

// Non-member overload of << operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    return bureaucrat.print(out);
}
