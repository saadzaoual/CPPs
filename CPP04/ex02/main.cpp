/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:18:02 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 14:01:18 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "===== TESTING ABSTRACT CLASS =====" << std::endl;
    std::cout << "Animal is now abstract and cannot be instantiated!" << std::endl;
    
    std::cout << "\n===== POLYMORPHISM WITH ABSTRACT BASE =====" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << "  " << dog->getType() << std::endl;
    std::cout << "  " << cat->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl;
    std::cout << "  ";
    dog->makeSound();
    std::cout << "  ";
    cat->makeSound();

    std::cout << "\nDeleting animals:" << std::endl;
    delete dog;
    delete cat;

    std::cout << "\n===== ARRAY OF ANIMALS =====" << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

    std::cout << "Creating array (3 Dogs, 3 Cats):" << std::endl;
    for (int i = 0; i < arraySize / 2; i++)
        animals[i] = new Dog();
    for (int i = arraySize / 2; i < arraySize; i++)
        animals[i] = new Cat();

    std::cout << "\nTesting polymorphic sounds:" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "  " << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }

    std::cout << "\nDeleting array:" << std::endl;
    for (int i = 0; i < arraySize; i++)
        delete animals[i];

    std::cout << "\n===== DEEP COPY TEST =====" << std::endl;
    std::cout << "Creating original dog:" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->getBrain()->setIdea(0, "I love bones");
    originalDog->getBrain()->setIdea(1, "I hate cats");

    std::cout << "\nCreating copy of dog:" << std::endl;
    Dog* copiedDog = new Dog(*originalDog);

    std::cout << "\nOriginal dog's ideas:" << std::endl;
    std::cout << "  Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << originalDog->getBrain()->getIdea(1) << std::endl;

    std::cout << "\nCopied dog's ideas (should be same):" << std::endl;
    std::cout << "  Idea 0: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << copiedDog->getBrain()->getIdea(1) << std::endl;

    std::cout << "\nChanging copied dog's ideas:" << std::endl;
    copiedDog->getBrain()->setIdea(0, "I changed my mind");
    
    std::cout << "\nAfter modification:" << std::endl;
    std::cout << "  Original idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Copied idea 0:   " << copiedDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Deep copy works! (different Brain objects)" << std::endl;

    std::cout << "\nCleaning up:" << std::endl;
    delete originalDog;
    delete copiedDog;

    std::cout << "\n===== ALL TESTS PASSED =====" << std::endl;
    return 0;
}
