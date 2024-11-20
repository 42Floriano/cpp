/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 18:39:03 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main() 
{
    std::cout << "--- Creating FragTrap with Default Constructor ---" << std::endl;
    FragTrap fragDefault;

    std::cout << "--- Creating FragTrap with Parameterized Constructor ---" << std::endl;
    FragTrap fragParam("Fraggy");

    std::cout << "--- Testing Copy Constructor ---" << std::endl;
    FragTrap fragvCopy = fragParam;

    std::cout << "--- Testing Assignment Operator ---" << std::endl;
    fragDefault = fragParam;

    std::cout << "--- Testing Unique Methods ---" << std::endl;
    fragParam.highFivesGuys();

    std::cout << "--- Testing Heritated Attack ---" << std::endl;
    fragParam.attack("Enemy");

    std::cout << "--- Testing Destruction Order ---" << std::endl;
    return 0;
}
