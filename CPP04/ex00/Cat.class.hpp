/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:33 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 10:46:53 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HAPP
# define CAT_CLASS_HAPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"


class Cat : public Animal
{
    private:
    
    public:
		//Constructor
		Cat(void);
		//Copy Constructor 
		Cat(const Cat &value);
   		//Assigment Opperator
		Cat &operator=(const Cat &rhs);
		//Destructor
		~Cat(void);
		//Methods
        void    makeSound(void) const ;
};

#endif