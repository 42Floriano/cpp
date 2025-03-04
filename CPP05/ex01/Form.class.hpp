#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _executeGrade;

public:
    // Exception classes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    // Constructors
    Form();
    Form(std::string name, int signGrade, int executeGrade);
    Form(const Form& other);
    Form& operator=(const Form& rhs);
    virtual ~Form();

    // Methods
    void beSigned(Bureaucrat &bureaucrat);

    // Getters
    const std::string& getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
};

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
