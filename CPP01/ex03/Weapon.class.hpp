/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:13 by falberti          #+#    #+#             */
/*   Updated: 2024/11/14 14:34:41 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string name);
        ~Weapon(void);
        std::string get_type(void) const;
        void        set_type(std::string type);
};

#endif
