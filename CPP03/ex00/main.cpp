/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 15:08:43 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.class.hpp"

int main() {
    // Create ClapTrap objects
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo", 20, 5, 3);

    // Test copy constructor
    ClapTrap clap3 = clap2;
    std::cout << "Clap3 (copied from Clap2) name: " << clap3.getName() << std::endl;

    // Test assignment operator
    clap1 = clap2;
    std::cout << "Clap1 (assigned from Clap2) name: " << clap1.getName() << std::endl;

    // Test attack functionality
    clap1.attack("TargetOne");
    clap1.attack("TargetTwo");

    // Test taking damage
    clap1.takeDamage(5);
    clap1.takeDamage(10); // Test edge case (HP goes below zero)

    // Test healing
    clap1.heal(3);
    clap1.heal(7); // Test with low energy

    // Test out of energy scenarios
    while (clap1.getEnergy() > 0) {
        clap1.attack("DummyTarget");
    }
    clap1.attack("DummyTarget"); // Should show not enough energy

    // Additional tests for Clap3
    std::cout << "\n--- Testing Clap3 ---" << std::endl;
	clap3.setName("clap3");
    clap3.attack("TargetThree");
    clap3.takeDamage(8);
    clap3.heal(5);

    std::cout << "\n--- End of Clap3 Tests ---" << std::endl;

    // Test destruction
    std::cout << "End of main, objects will be destroyed..." << std::endl;

    return 0;
}
