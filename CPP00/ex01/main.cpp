/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:24:54 by falberti          #+#    #+#             */
/*   Updated: 2024/11/06 14:49:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    //Phonebook   pbook;
    std::string str;

    while (str != "EXIT")
    {
        std::cout << "Enter command> ";
        std::getline(std::cin, str);
        if (str == "ADD")
            std::cout << "Adding";
        if (str == "SEARCH")
            std::cout << "Searching";
        if (std::cin.eof())
            return (0);
        std::cout << std::endl;
    }
    return (0);
}