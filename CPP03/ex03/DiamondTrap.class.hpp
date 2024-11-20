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



class Diamond
{
	protected:
		std::string			_name;
		int					_hp;
		unsigned int		_energy;
		unsigned int		_attack;
	public:
		//Default Constructor
		//Constructor
		Diamond(std::string name);
		//Constructor
		Diamond(std::string name, int hp, unsigned int energy, unsigned int attack);
		//Copy Constructor 
		Diamond(const Diamond &value);
   		//Assigment Opperator
		Diamond &operator=(const Diamond &rhs);
		//Destructor
		~Diamond(void);
		//Methods
};

#endif
