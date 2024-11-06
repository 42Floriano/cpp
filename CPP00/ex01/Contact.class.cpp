/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:52:08 by falberti          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:36 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string Contact::get_fname(void) const
{
    return (this->_fname);
}
std::string Contact::get_lname(void) const
{
    return (this->_lname);
}
std::string Contact::get_nick(void) const
{
    return (this->_nick);
}
std::string Contact::get_phnum(void) const
{
    return (this->_phnum);
}
std::string Contact::get_secret(void) const
{
    return (this->_secret);
}

void    Contact::set_fname(std::string str)
{
    this->_fname = str;
}
void    Contact::set_lname(std::string str)
{
    this->_lname = str;
}
void    Contact::set_nick(std::string str)
{
    this->_nick = str;
}
void    Contact::set_phnum(std::string str)
{
    this->_phnum = str;
}
void    Contact::set_secret(std::string str)
{
    this->_secret = str;
}