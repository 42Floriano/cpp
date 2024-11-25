/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 22:57:43 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HAPP
# define ANIMAL_CLASS_HAPP

# include <iostream>
# include <string>


class Animal
{
	protected:
        std::string _type;
	public:
		//Constructors
        Animal(void);
		Animal(std::string type);
		//Copy Constructor 
		Animal(const Animal &value);
   		//Assigment Opperator
		Animal &operator=(const Animal &rhs);
		//Destructor
		virtual ~Animal(void);
		//Methods
        virtual void    makeSound(void) const;
		//Getters & Setters
        std::string getType(void) const;
        void setType(std::string type);
};

#endif