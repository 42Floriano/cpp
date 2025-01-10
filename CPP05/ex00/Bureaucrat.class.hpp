/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2025/01/10 14:17:48 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>


class Bureaucrat
{
	private:
        const std::string _name;
		int	_grade;
	public:
	//Constructors
		Bureaucrat(std::string name, int grade);
		//Copy Constructor 
		Bureaucrat(const Bureaucrat &value);
   		//Assigment Opperator
		Bureaucrat &operator=(const Bureaucrat &rhs);
		//Destructor
		~Bureaucrat(void);
		//Methods
        void    incrGrade(void);
		void    decrGrade(void);
		void 	changeGrade(int grade);
		//Getters & Setters
        std::string getName(void) const;
		int	getGrade(void) const;
        //void setName(std::string name);
		void setGrade(int grade);

};

#endif