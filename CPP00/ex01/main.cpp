/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:24:54 by falberti          #+#    #+#             */
/*   Updated: 2024/11/13 11:57:54 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main(void)
{
    Phonebook   pbook;
    std::string str;

    while (str != "EXIT")
    {
        std::cout << "Enter command> ";
        std::getline(std::cin, str);
        if (str == "ADD")
		{
			pbook.add();
		}
        if (str == "SEARCH")
		{
			pbook.search();
		}
        if (std::cin.eof())
		{
            return (0);
        	std::cout << std::endl;
		}
    }
    return (0);
}
