/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 16:01:12 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HAPP
# define FRAGTRAP_CLASS_HAPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.class.hpp"


class FragTrap : public ClapTrap
{
	public:
		//Constructor
		FragTrap(void);
		FragTrap(std::string name);
		//Copy Constructor 
		FragTrap(const FragTrap &other);
   		//Assigment Opperator
		FragTrap &operator=(const FragTrap &rhs);
		//Destructor
		~FragTrap(void);
		//Methods
		void	highFivesGuys(void);
};

#endif
