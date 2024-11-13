/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:08:04 by falberti          #+#    #+#             */
/*   Updated: 2024/11/13 12:22:59 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
//#include "Phonebook.utils.hpp"

Phonebook::Phonebook(void)
{
    this->_index  = 0;
    std::cout << "Welcome to your phonebook!" << std::endl;
    return ;
}

Phonebook::~Phonebook(void)
{
    std::cout << "See you next time!" << std::endl;
    return ;
}

void    Phonebook::add(void)
{
    std::cout << "It's me, add" << std::endl;
	std::string	str;
	if (this->_index > 7)
		std::cout << "Warning overwritting the contact " << this->_contact[this->_index % 8].get_fname() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name: ";
		if  (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_fname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " last name: " << std::endl;
		if (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_lname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " nick name: " << std::endl;
		if (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_nick(str);
	}
    return;
}

//Get contact with inside the private array by index
Contact	Phonebook::get_contact(int i)
{
	return (this->contact[i % 8]);
}

void    Phonebook::search(void)
{
    std::cout << "It's me, search" << std::endl;
    return;
}
