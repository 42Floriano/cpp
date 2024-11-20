/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 12:37:00 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HAPP
# define CLAPTRAP_CLASS_HAPP

# include <iostream>
# include <string>
# include <cmath>


class ClapTrap
{
	private:
		std::string			_name;
		unsigned int		_energy;
		unsigned int		_hp;
		unsigned int		_attack;
	public:
		//Default Constructor
		//Constructor
		ClapTrap(std::string name);
		//Constructor
		ClapTrap(std::string name, unsigned int energy, unsigned int hp, unsigned int attack);
		//Copy Constructor 
		ClapTrap(const ClapTrap &value);
   		//Assigment Opperator
		ClapTrap &operator=(const ClapTrap &rhs);
		//Destructor
		~ClapTrap(void);
		//Methods
		//Operators
		// min & max
		//Getters & Setters
		std::string	getName() const;
		unsigned int	getEnergy() const;
		unsigned int	getHp() const;
		unsigned int	getAttack() const;
		void setName(std::string name);
		void setEnergy(unsigned int energy);
		void setHp(unsigned int hp);
		void setAttack(unsigned int attack);
};

#endif
