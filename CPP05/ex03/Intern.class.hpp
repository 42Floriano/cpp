#ifndef INTERN_CLASS_HPP
#define INTERN_CLASS_HPP

#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include <iostream>

class Aform;

class Intern {
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& rhs);
        virtual ~Intern();     

        AForm* makeForm(std::string formName, std::string target);
};

#endif