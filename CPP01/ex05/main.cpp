/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/18 13:52:12 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main (int ac, char **ag)
{
	(void)ag;
	if (ac != 1)
	{
		std::cerr << "Harl takes 0 arguments" << std::endl;
	}
	Harl harl;
    std::cout << "Testing Harl with different levels:" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN"); // Invalid level
	return (0);
}
