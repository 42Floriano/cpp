/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2025/03/05 17:34:04 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
# include "AForm.class.hpp"

class AForm;


class Bureaucrat
{
	private:
        const std::string _name;
		int	_grade;
		
	public:
	
	class GradeTooHighException : public std::exception{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
		virtual const char* what() const throw();
	};
	
	//Constructors
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		//Copy Constructor 
		Bureaucrat(const Bureaucrat &value);
   		//Assigment Opperator
		Bureaucrat &operator=(const Bureaucrat &rhs);
		//Destructor
		virtual ~Bureaucrat(void);
		//Methods
        void    incrGrade(void);
		void    decrGrade(void);
		void	signForm(AForm& form);
		void	executeForm(AForm const &form) const;
		//void 	changeGrade(int grade);
		//Getters & Setters
        const std::string& getName(void) const;
		//void setGrade(int grade);
		int	getGrade(void) const;
		
		std::ostream& print(std::ostream& os) const;
};

// Non-member overload of << operator
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif