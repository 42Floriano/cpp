/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:13 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 16:06:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include <iostream>
# include <string>
# include "Weapon.class.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void        attack(void);
        void        set_name(std::string name);
        void        set_weapon(Weapon &weapon);
        std::string get_name(void);
};

#endif
