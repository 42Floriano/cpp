#include "Form.class.hpp"

// Exception messages
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Constructors
Form::Form() : _name("Default Form"), _isSigned(false), _signGrade(150), _executeGrade(150) {}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

Form& Form::operator=(const Form& rhs) {
    if (this != &rhs)
        _isSigned = rhs._isSigned; // Only _isSigned can be modified
    return *this;
}

Form::~Form() {}

// Methods
void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

// Getters
const std::string& Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _isSigned;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Signed: " << (form.isSigned() ? "Yes" : "No")
       << ", Sign Grade: " << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade();
    return os;
}
