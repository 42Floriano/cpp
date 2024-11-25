/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 13:47:51 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HAPP
# define ANIMAL_CLASS_HAPP

# include <iostream>
# include <string>


class Animal
{
	protected:

	public:
		//Default Constructor
		//Constructor
		Animal(std::string name);
		//Copy Constructor 
		Animal(const Animal &value);
   		//Assigment Opperator
		Animal &operator=(const Animal &rhs);
		//Destructor
		~Animal(void);
		//Methods
		//Getters & Setters
};

#endif