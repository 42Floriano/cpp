/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:41 by falberti          #+#    #+#             */
/*   Updated: 2025/01/10 14:06:00 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

//Constructors

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    this->setGrade(grade);
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& value) : _name(value._name), _grade(value._grade)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if(this != &rhs)
        this->_name = rhs._name;
        this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat desrtuctor called" << std::endl;
}

//methods
void    Bureaucrat::changeGrade(int grade)
{
    setGrade(grade);
    std::cout << "Bureaucrat grade has changed to " << this->getGrade() << " !" << std::endl;
}

//Getters & setters
std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
    //try & catch
}

