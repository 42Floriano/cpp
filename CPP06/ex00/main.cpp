/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:44 by floriano          #+#    #+#             */
/*   Updated: 2025/03/19 11:21:21 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.class.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Please enter either a char / int / float / double " << std::endl;
        return 0;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}
