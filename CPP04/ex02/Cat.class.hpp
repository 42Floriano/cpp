/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:33 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:30:02 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HAPP
# define CAT_CLASS_HAPP

# include <iostream>
# include <string>
# include "AAnimal.class.hpp"
# include "Brain.class.hpp"


class Cat : public AAnimal
{
    private:
		Brain *_brain;
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
        void    makeSound(void) const;
		void	setIdea(int index, const std::string &idea);
		std::string	getIdea(int index) const;
};

#endif