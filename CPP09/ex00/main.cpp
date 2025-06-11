/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:33:52 by falberti          #+#    #+#             */
/*   Updated: 2025/06/11 13:39:09 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.class.hpp"


int main(int ac, char **av){
    if (ac == 1){
        BitcoinExchange exchanger;;
        exchanger.initDb();
        exchanger.loadNewDb(av[1]);
    } else {
        std::cout << "Error: file couldn't be open." << std::endl;
        return 1;
    }
}