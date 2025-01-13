/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/18 13:32:26 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HAPP
# define HARL_CLASS_HAPP

# include <iostream>
# include <string>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

typedef void (Harl::*HarlFunction)(void);

#endif
