/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:08:04 by falberti          #+#    #+#             */
/*   Updated: 2024/11/13 15:00:35 by albertini        ###   ########.fr       */
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

//Adds contact to contact array
void    Phonebook::add(void)
{
	std::string	str;
	if (this->_index > 7)
		std::cout << "Warning overwritting the contact " << this->_contact[this->_index % 8].get_fname();
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name: ";
		if  (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_fname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_lname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " nick name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " phonenumber: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contact[this->_index % 8].set_phnum(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contact[this->_index % 8].get_fname() << " darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->_contact[this->_index % 8].set_secret(str);
			std::cout << this->_contact[this->_index % 8].get_fname() << " succefully addes to phonebook [" << (this->_index % 8) << "] !" << std::endl;
		}
	}
	this->_index++;
    return ;
}

void	Phonebook::print(Contact contact)
{
	std::cout << "Requesting contact info... " << std::endl;
	if (!contact.get_fname().size())
	{
		std::cout << "Failed to load contact information." << std::endl;
		return ;
	}
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First Name: " << contact.get_fname() << std::endl;
	std::cout << "Last Name: " << contact.get_lname() << std::endl;
	std::cout << "Nickname: " << contact.get_nick() << std::endl;
	std::cout << "Phonenumber: " << contact.get_phnum() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
	return ;
}

//Get contact with inside the private array by index
Contact	Phonebook::get_contact(int i)
{
	return (this->_contact[i % 8]);
}

std::string add_space(int n)
{
	std::string str;
	
	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_size(std::string str, unsigned int max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	print_phonebook(Contact contact[8])
{
	int			i;
	char		c;
	std::string	str;

	std::cout << contact[0].get_fname() << std::endl;
	i = 0;
	c = '0';
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (c <= '7')
	{
		if (contact[i].get_fname().size())
		{
		str = c;
		str = fix_size(str, 10);
		std::cout << "|" << add_space(10 - str.size()) << str;
		str = fix_size(contact[i].get_fname(), 10);
		std::cout << "|" << add_space(10 - str.size()) << str;
		str = fix_size(contact[i].get_lname(), 10);
		std::cout << "|" << add_space(10 - str.size()) << str;
		str = fix_size(contact[i].get_nick(), 10);
		std::cout << "|" << add_space(10 - str.size()) << str;
		std::cout << "|" << std::endl;
		}
		c++;
		i++;
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (0);
}

void    Phonebook::search(void)
{
    std::string	str;
	
	if (!this->_contact[0].get_fname().size())
	{
		std::cout << "Phonebook is empty - please add data." << std::endl;
		return ;
	}
	print_phonebook(this->_contact);
	while (!std::cin.eof() && str != "EXIT")
	{
		std::cout << "Select an existing Index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if ( str.size() == 1 && (str[0] >= '0' && str[0] <= '7') && this->_contact[str[0] - '0'].get_fname().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index!";
	}
	if (!std::cin.eof())
		this->print(this->_contact[str[0] - '0']);
    return ;
}
