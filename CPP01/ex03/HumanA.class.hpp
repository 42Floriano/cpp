/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:13 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 16:06:23 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include <iostream>
# include <string>
# include "Weapon.class.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void        attack(void);
        void        set_name(std::string name);
        std::string get_name(void);
};

#endif
