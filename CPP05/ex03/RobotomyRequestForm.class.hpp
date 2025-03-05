/* ************************************************************************** */

#ifndef D77CA86C_BF5E_4484_AAE2_29590D79451B
#define D77CA86C_BF5E_4484_AAE2_29590D79451B
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:24:41 by falberti          #+#    #+#             */
/*   Updated: 2025/03/04 15:19:34 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm.class.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
private:
    std::string _target;

public:
    // Constructor & Destructor
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
    virtual ~RobotomyRequestForm();

    // Execute function
    void execute(Bureaucrat const &executor) const;
};

#endif


#endif /* D77CA86C_BF5E_4484_AAE2_29590D79451B */
