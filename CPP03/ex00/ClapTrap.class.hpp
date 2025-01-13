/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 14:35:01 by albertini        ###   ########.fr       */
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
		int		_hp;
		unsigned int		_energy;
		unsigned int		_attack;
	public:
		//Default Constructor
		//Constructor
		ClapTrap(std::string name);
		//Constructor
		ClapTrap(std::string name, int hp, unsigned int energy, unsigned int attack);
		//Copy Constructor 
		ClapTrap(const ClapTrap &value);
   		//Assigment Opperator
		ClapTrap &operator=(const ClapTrap &rhs);
		//Destructor
		~ClapTrap(void);
		//Methods
		void	attack(const std::string &target);
		void	takeDamage(unsigned int ammount);
		void	heal(unsigned int ammount);
		//Operators
		// min & max
		//Getters & Setters
		std::string	getName() const;
		unsigned int	getEnergy() const;
		int	getHp() const;
		unsigned int	getAttack() const;
		void setName(std::string name);
		void setEnergy(unsigned int energy);
		void setHp(int hp);
		void setAttack(unsigned int attack);
};

#endif
