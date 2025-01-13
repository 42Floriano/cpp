/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:32:19 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 12:29:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

int main() {
    const int arraySize = 4;
    AAnimal* animals[arraySize];

    std::cout << "Creating animals..." << std::endl;
    for (int i = 0; i < arraySize / 2; ++i)
        animals[i] = new Dog();
    for (int i = arraySize / 2; i < arraySize; ++i)
        animals[i] = new Cat();

    std::cout << "\nTesting animal sounds..." << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\nDeleting animals..." << std::endl;
    for (int i = 0; i < arraySize; ++i)
        delete animals[i];

    return 0;
}
