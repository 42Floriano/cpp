/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:32:28 by falberti          #+#    #+#             */
/*   Updated: 2024/11/26 11:32:29 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

int main() {
    const int arraySize = 4;
    Animal* animals[arraySize];

    std::cout << "Creating animals..." << std::endl;
    for (int i = 0; i < arraySize / 2; ++i)
        animals[i] = new Dog();
    for (int i = arraySize / 2; i < arraySize; ++i)
        animals[i] = new Cat();

    // Displaying the default ideas from the Brain of each animal
    std::cout << "\nDisplaying default ideas of the animals..." << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        if (Dog* dog = dynamic_cast<Dog*>(animals[i])) {
            std::cout << "Dog's Idea 0: " << dog->getIdea(0) << std::endl;
            std::cout << "Dog's Idea 1: " << dog->getIdea(1) << std::endl;
            std::cout << "Dog's Idea 2: " << dog->getIdea(2) << std::endl;
        } else if (Cat* cat = dynamic_cast<Cat*>(animals[i])) {
            std::cout << "Cat's Idea 0: " << cat->getIdea(0) << std::endl;
            std::cout << "Cat's Idea 1: " << cat->getIdea(1) << std::endl;
            std::cout << "Cat's Idea 2: " << cat->getIdea(2) << std::endl;
        }
    }

    // Cleaning up
    std::cout << "\nDeleting animals..." << std::endl;
    for (int i = 0; i < arraySize; ++i)
        delete animals[i];

    return 0;
}
