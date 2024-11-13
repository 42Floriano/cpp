/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:28 by albertini         #+#    #+#             */
/*   Updated: 2024/11/13 20:08:12 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int size = 8;
	Zombie *horde;
	std::cout << "Test 1 Horde ----------------------------------------------------- " << std::endl;
	horde = zombieHorde(size, "Gaelle");
	delete [] horde;
	std::cout << "The Horde has been eliminated! Thanks Rick! " << std::endl;
	return (0);
}
