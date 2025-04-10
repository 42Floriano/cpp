/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:30:19 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 15:03:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"

int main(){
    Data database;
    database.name = "gaelle";
    database.age = 31;
    
    std::cout 
        << "data name: " << database.name
        << " date age: " << database.age
        << std::endl;
    
    std::cout
        << "Deserialized pointer: " << &database
        << std::endl;
    
    uintptr_t raw = Serializer::serialize(&database);
    std::cout 
        << "Serial (raw): " << raw
        << std::endl;
    
    Data* original = Serializer::deserialize(raw);
    std::cout
        << "Deserialized pointer: " << original
        << std::endl;
    std::cout
        << "Name: " << original->name
        << " Age: " << original->age
        << std::endl;
        
    return (0);
}
