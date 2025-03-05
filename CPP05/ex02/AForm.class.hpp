#ifndef E50087BA_B0F4_48ED_85B5_BD52EDE07788
#define E50087BA_B0F4_48ED_85B5_BD52EDE07788
#ifndef AFORM_CLASS_HPP
#define AFORM_CLASS_HPP

#include "Bureaucrat.class.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
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

    class FormNotSignedException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    // Constructors
    AForm();
    AForm(std::string name, int signGrade, int executeGrade);
    AForm(const AForm& other);
    AForm& operator=(const AForm& rhs);
    virtual ~AForm();

    // Methods
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;

    // Getters
    const std::string& getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
};

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif


#endif /* E50087BA_B0F4_48ED_85B5_BD52EDE07788 */
