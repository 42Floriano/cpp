/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:40:24 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 16:09:19 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

int main(){
    srand(time(0));
    Base* test = generate();
    Base* test2 = generate();
    Base& test3(*test2);
    
    identify(test);
    identify(test3);
    delete(test);
    delete(test2);
    
    return (0);
}