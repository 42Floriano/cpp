/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 23:34:39 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HAPP
# define WRONGANIMAL_CLASS_HAPP

# include <iostream>
# include <string>


class WrongAnimal
{
	protected:
        std::string _type;
	public:
		//Constructors
        WrongAnimal(void);
		WrongAnimal(std::string type);
		//Copy Constructor 
		WrongAnimal(const WrongAnimal &value);
   		//Assigment Opperator
		WrongAnimal &operator=(const WrongAnimal &rhs);
		//Destructor
		virtual ~WrongAnimal(void);
		//Methods
        void    makeSound(void) const;
		//Getters & Setters
        std::string getType(void) const;
        void setType(std::string type);
};

#endif