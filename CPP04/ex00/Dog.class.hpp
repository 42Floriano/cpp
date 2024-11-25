/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:29 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 15:59:38 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HAPP
# define DOG_CLASS_HAPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"


class Dog : public Animal
{
	protected:

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
        void    makeSound(void) const;
		//Getters & Setters
};

#endif