/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 15:55:32 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HAPP
# define SCAVTRAP_CLASS_HAPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.class.hpp"


class ScavTrap : public ClapTrap
{
	public:
		//Constructor
		ScavTrap(void);
		ScavTrap(std::string name);
		//Copy Constructor 
		ScavTrap(const ScavTrap &other);
   		//Assigment Opperator
		ScavTrap &operator=(const ScavTrap &rhs);
		//Destructor
		~ScavTrap(void);
		//Methods
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
