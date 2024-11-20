/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 15:54:36 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main() 
{
    std::cout << "--- Creating ScavTrap with Default Constructor ---" << std::endl;
    ScavTrap scavDefault;

    std::cout << "--- Creating ScavTrap with Parameterized Constructor ---" << std::endl;
    ScavTrap scavParam("Scavvy");

    std::cout << "--- Testing Copy Constructor ---" << std::endl;
    ScavTrap scavCopy = scavParam;

    std::cout << "--- Testing Assignment Operator ---" << std::endl;
    scavDefault = scavParam;

    std::cout << "--- Testing Unique Methods ---" << std::endl;
    scavParam.guardGate();

    std::cout << "--- Testing Overridden Attack ---" << std::endl;
    scavParam.attack("Enemy");

    std::cout << "--- Testing Destruction Order ---" << std::endl;
    return 0;
}
