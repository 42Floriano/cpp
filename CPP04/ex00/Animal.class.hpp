/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/25 15:59:22 by falberti         ###   ########.fr       */
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
		~Animal(void);
		//Methods
        void    makeSound(void) const;
		//Getters & Setters
        std::string getType(void) const;
        void setType(std::string type);
};

#endif