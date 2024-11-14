/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:28 by albertini         #+#    #+#             */
/*   Updated: 2024/11/14 16:11:56 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include "HumanB.class.hpp"
#include "Weapon.class.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		std::cout << "Case 1 ---------------------------------------------- " << std::endl;
		Weapon club = Weapon("crude spiked club");
		std::cout << "----------------------------------------------------- " << std::endl;
		HumanA bob("Bob", club);
		std::cout << "----------------------------------------------------- " << std::endl;
		bob.attack();
		club.set_type("some other type of club");
		bob.attack();
		std::cout << "----------------------------------------------------- " << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "Case 2 ---------------------------------------------- " << std::endl;
		Weapon club = Weapon("crude spiked club");
		std::cout << "----------------------------------------------------- " << std::endl;
		HumanB jim("Jim");
		std::cout << "----------------------------------------------------- " << std::endl;
		jim.set_weapon(club);
		jim.attack();
		club.set_type("some other type of club");
		jim.attack();
		std::cout << "----------------------------------------------------- " << std::endl;
	}
	return 0;
}
