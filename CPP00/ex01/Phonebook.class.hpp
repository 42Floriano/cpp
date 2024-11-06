/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:37:08 by falberti          #+#    #+#             */
/*   Updated: 2024/11/06 17:09:44 by falberti         ###   ########.fr       */
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
        Contact contact[8];
        int     _index;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    add(void);
        void    search(void);
};

#endif