/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:27:00 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 16:09:01 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base::~Base() {};

Base* generate(){
    int r = rand() % 3;
    if (r == 0)
        return new A;
    else if (r == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p) {
    std::cout << "Ptr:\n";

    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else
        std::cout << "Not A" << std::endl;

    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else
        std::cout << "Not B" << std::endl;

    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not C" << std::endl;
}

void identify(Base& p) {
    std::cout << "Ref:\n";

    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (...) {};

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (...) {};

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (...) {};
}
