/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:28 by albertini         #+#    #+#             */
/*   Updated: 2024/11/14 13:47:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string &strRef = str;
	
	std::cout << "Addresses ------------------------------------------- " << std::endl;
	std::cout << "Address of string (str): " << &str << std::endl;
    std::cout << "Address of pointer (ptr): " << &strPtr << std::endl;
    std::cout << "Address of reference (ref): " << &strRef << std::endl;
	std::cout << "----------------------------------------------------- " << std::endl;
	std::cout << "Value ---------------------------------------------- " << std::endl;
	std::cout << "Value of string (str): " << str << std::endl;
    std::cout << "Value of pointer (ptr): " << *strPtr << std::endl;
    std::cout << "Value of reference (ref): " << strRef << std::endl;
	std::cout << "----------------------------------------------------- " << std::endl;
	
	*strPtr = "Kikou";
	std::cout << "Changing ptr value ------------------------------------- " << std::endl;
	std::cout << "Value of string (str): " << str << std::endl;
    std::cout << "Value of pointer (ptr): " << *strPtr << std::endl;
    std::cout << "Value of reference (ref): " << strRef << std::endl;
	std::cout << "----------------------------------------------------- " << std::endl;
	
    strRef = "Bonjour";
	std::cout << "Changing ref value ------------------------------------- " << std::endl;
	std::cout << "Value of string (str): " << str << std::endl;
    std::cout << "Value of pointer (ptr): " << *strPtr << std::endl;
    std::cout << "Value of reference (ref): " << strRef << std::endl;
	std::cout << "----------------------------------------------------- " << std::endl;
	
	return (0);
}
