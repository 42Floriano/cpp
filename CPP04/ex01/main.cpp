/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/26 10:35:24 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

void testAnimalPolymorphism() {
	std::cout << "=== Testing Animal Polymorphism ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Type of dog: " << dog->getType() << std::endl;
	std::cout << "Type of cat: " << cat->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
	std::cout << "=== End of Animal Polymorphism Test ===" << std::endl;
}

void testWrongAnimalBehavior() {
	std::cout << "\n=== Testing WrongAnimal Behavior ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;

	wrongCat->makeSound(); // Should output WrongAnimal sound
	wrongMeta->makeSound(); // Should output WrongAnimal sound

	delete wrongMeta;
	delete wrongCat;
	std::cout << "=== End of WrongAnimal Behavior Test ===" << std::endl;
}

void testConstructorsAndDestructors() {
	std::cout << "\n=== Testing Constructors and Destructors ===" << std::endl;

	Animal basicAnimal("GenericAnimal");
	Cat simpleCat;
	Dog simpleDog;

	basicAnimal.makeSound();
	simpleCat.makeSound();
	simpleDog.makeSound();

	std::cout << "=== End of Constructors and Destructors Test ===" << std::endl;
}

void testAssignmentAndCopy() {
	std::cout << "\n=== Testing Assignment and Copy ===" << std::endl;

	Dog originalDog;
	originalDog.makeSound();

	Dog copiedDog(originalDog);
	copiedDog.makeSound();

	Cat assignedCat;
	Cat anotherCat;
	anotherCat = assignedCat;

	assignedCat.makeSound();
	anotherCat.makeSound();

	std::cout << "=== End of Assignment and Copy Test ===" << std::endl;
}

int main() {
	testAnimalPolymorphism();
	testWrongAnimalBehavior();
	testConstructorsAndDestructors();
	testAssignmentAndCopy();
	return 0;
}
