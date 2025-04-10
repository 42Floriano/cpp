/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:27:02 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 16:00:42 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
#define BASE_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>
# include  <cstdlib>

class Base {
    public:
        virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif