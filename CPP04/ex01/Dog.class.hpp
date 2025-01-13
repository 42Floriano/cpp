/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:29 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:18:34 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HAPP
# define DOG_CLASS_HAPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"
# include "Brain.class.hpp"


class Dog : public Animal
{
	protected:
		Brain *_brain;
	public:
		//Default Constructor
		//Constructor
		Dog(void);
		//Copy Constructor 
		Dog(const Dog &value);
   		//Assigment Opperator
		Dog &operator=(const Dog &rhs);
		//Destructor
		~Dog(void);
		//Methods
        void    makeSound(void) const ;
		//Getters & Setters
		void setIdea(int index, const std::string& idea); // Set an idea in the Brain
		std::string getIdea(int index) const; 
};

#endif