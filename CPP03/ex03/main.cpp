/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/20 22:41:48 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.class.hpp"

int main() {
    std::cout << "--- Creating DiamondTrap ---" << std::endl;
    Diamond diamond("Diamondy");

    std::cout << "--- Testing attack ---" << std::endl;
    diamond.attack("Enemy");

    std::cout << "--- Testing whoAmI ---" << std::endl;
    diamond.whoAmI();

    std::cout << "--- Testing Destruction Order ---" << std::endl;
    return 0;
}
