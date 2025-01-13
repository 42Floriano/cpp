/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   	Trap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 18:39:53 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HAPP
# define DIAMONDTRAP_CLASS_HAPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.class.hpp"
# include "ScavTrap.class.hpp"
# include "FragTrap.class.hpp"



class Diamond : public FragTrap, public ScavTrap
{
	protected:
		std::string			_name;

	public:
		//Default Constructor
		//Constructor
		Diamond(std::string name);
		//Copy Constructor 
		Diamond(const Diamond &other);
   		//Assigment Opperator
		Diamond &operator=(const Diamond &rhs);
		//Destructor
		~Diamond(void);
		//Methods
		void whoAmI(void);
		void attack(const std::string &target);
};

#endif
