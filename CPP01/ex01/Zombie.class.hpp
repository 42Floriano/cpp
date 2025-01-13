/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:42:02 by albertini         #+#    #+#             */
/*   Updated: 2024/11/18 13:21:04 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>

class Zombie 
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		std::string	get_name(void) const;
		void		set_name(std::string str);
		void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
