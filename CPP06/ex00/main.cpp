/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:44 by floriano          #+#    #+#             */
/*   Updated: 2025/03/07 12:10:16 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.class.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Please enter either a char / int / float / double " << std::endl;
        return (0);
    }
    ScalarConverter::converters(av[1]);
    return (1);
}