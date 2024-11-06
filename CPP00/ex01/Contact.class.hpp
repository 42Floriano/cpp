/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:52:32 by falberti          #+#    #+#             */
/*   Updated: 2024/11/06 17:01:43 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "Phonebook.class.hpp"

class Contact
{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nick;
        std::string _phnum;
        std::string _secret;
    public:
        Contact(void);
        ~Contact(void);
        //Getters & setters
        std::string     get_fname(void) const;
        std::string     get_lname(void) const;
        std::string     get_nick(void) const;
        std::string     get_phnum(void) const;
        std::string     get_secret(void) const;
        void            set_fname(std::string str);
        void            set_lname(std::string str);
        void            set_nick(std::string str);
        void            set_phnum(std::string str);
        void            set_secret(std::string str);
};

#endif