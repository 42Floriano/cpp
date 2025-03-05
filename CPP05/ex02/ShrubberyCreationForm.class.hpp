/* ************************************************************************** */

#ifndef FE7AE82B_4DB8_401E_8A1F_6923669F8431
#define FE7AE82B_4DB8_401E_8A1F_6923669F8431
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:24:44 by falberti          #+#    #+#             */
/*   Updated: 2025/03/04 15:19:40 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
    virtual ~ShrubberyCreationForm();
    
    void execute(Bureaucrat const& execute) const;
};

#endif


#endif /* FE7AE82B_4DB8_401E_8A1F_6923669F8431 */
