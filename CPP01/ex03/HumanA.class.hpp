/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:13 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 14:51:24 by falberti         ###   ########.fr       */
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
        Weapon &_weapon;
        std::string type;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void        attack(void);
        void        set_name(std::string name);
        void        set_weapon(Weapon &weapon);
        std::string get_name(void);
};

#endif
