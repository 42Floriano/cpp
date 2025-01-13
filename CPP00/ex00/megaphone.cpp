/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:10:37 by albertini         #+#    #+#             */
/*   Updated: 2024/10/31 11:22:36 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	p_cap(char *arg)
{
	while (*arg != '\0')
	{
		if (std::isalpha(*arg))
			std::cout << (char)std::toupper(*arg);
		else
			std::cout << *arg;
		arg++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		av++;
		while (*av != NULL)
		{
			p_cap(*av);
			av++;
		}
		std::cout << std::endl;
	}
	return (0);
}
