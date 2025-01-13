/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:49:41 by albertini         #+#    #+#             */
/*   Updated: 2024/11/13 20:08:52 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{	
		horde[i].set_name(name);
		horde[i].announce();
	}
	return (horde);
}
