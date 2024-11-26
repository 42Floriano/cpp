/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:45:33 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 10:47:14 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HAPP
# define WRONGCAT_CLASS_HAPP

# include <iostream>
# include <string>
# include "WrongAnimal.class.hpp"


class WrongCat : public WrongAnimal
{
    private:
    
    public:
		//Constructor
		WrongCat(void);
		//Copy Constructor 
		WrongCat(const WrongCat &value);
   		//Assigment Opperator
		WrongCat &operator=(const WrongCat &rhs);
		//Destructor
		~WrongCat(void);
		//Methods
};

#endif