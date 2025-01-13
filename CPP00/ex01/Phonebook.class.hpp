/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:37:08 by falberti          #+#    #+#             */
/*   Updated: 2024/11/13 14:21:32 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP

# define PHONEBOOK_CLASS_HPP
# include <iostream>
# include <string>
# include "Contact.class.hpp"

class Phonebook
{
    private:
        Contact _contact[8];
        int     _index;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    add(void);
        void    search(void);
		void	print(Contact contact);
		Contact	get_contact(int index);
};

std::string	add_space(int n);
std::string	fix_size(std::string str, int unsigned max);
int	print_phonebook(Contact contact[8]);

#endif
