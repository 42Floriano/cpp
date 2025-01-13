/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:39 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:29:08 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HAPP
# define AANIMAL_CLASS_HAPP

# include <iostream>
# include <string>


class AAnimal
{
	protected:
        std::string _type;
	public:
		//Constructors
        AAnimal(void);
		AAnimal(std::string type);
		//Copy Constructor 
		AAnimal(const AAnimal &value);
   		//Assigment Opperator
		AAnimal &operator=(const AAnimal &rhs);
		//Destructor
		virtual ~AAnimal(void);
		//Methods
        virtual void    makeSound(void) const = 0;
		//Getters & Setters
        std::string getType(void) const;
        void setType(std::string type);
};

#endif