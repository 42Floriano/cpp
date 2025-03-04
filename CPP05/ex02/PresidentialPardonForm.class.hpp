/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:24:33 by falberti          #+#    #+#             */
/*   Updated: 2025/03/04 15:06:36 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.class.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
private:
    std::string _target;

public:
    // Constructor & Destructor
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
    virtual ~PresidentialPardonForm();

    // Execute function
    void execute(Bureaucrat const &executor) const;
};

#endif