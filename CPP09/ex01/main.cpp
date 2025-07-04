/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:33:52 by falberti          #+#    #+#             */
/*   Updated: 2025/07/01 17:56:31 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Usage: ./RPN \"<expression>\" " << std::endl;
        return 1;
    }
    try {
        rpn resolver;
        int res = resolver.evaluate(av[1]);
        std::cout << res << std::endl;
    } catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}