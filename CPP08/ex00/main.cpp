/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:31:50 by falberti          #+#    #+#             */
/*   Updated: 2025/04/23 12:44:23 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(){
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 0; i < 5; i++){
        vec.push_back(i * 10);
        lst.push_back(i + 1);
    }
    try{
        std::vector<int>::iterator v_it = easyfind(vec, 40);
        std::cout << "Found in vector " << *v_it << std::endl;

        std::list<int>::iterator l_it = easyfind(lst, 3);
        std::cout << "Found in list " << *l_it << std::endl;
        
        easyfind(vec, 99);
    } catch (std::exception &e){
        std::cerr << "Error " << e.what() << std::endl;    
    }

    return (0);
}