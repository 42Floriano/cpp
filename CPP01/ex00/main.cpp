/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:28 by albertini         #+#    #+#             */
/*   Updated: 2024/11/14 14:36:52 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::cout << "Test 1 on stack ----------------------------------------------------- " << std::endl;
	Zombie zmb;
	Zombie zmb2("Gaelle");
	zmb.announce();
	zmb2.announce();
	
	std::cout << "Test 2 on stack ----------------------------------------------------- " << std::endl;
	randomChump("Berangere");
	randomChump("Bertrand");

	std::cout << "Test 3 on heap ----------------------------------------------------- " << std::endl;
	Zombie *zmb3 = newZombie("Oli");
	Zombie *zmb4 = newZombie("Vito");
	zmb3->announce();
	zmb4->announce();
	delete(zmb3);
	delete(zmb4);
	return (0);
}
