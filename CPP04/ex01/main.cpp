/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:18:02 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:43:14 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "===== BASIC TESTS =====" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;

    std::cout << "\n===== ARRAY OF ANIMALS =====" << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    // Fill half with Dogs, half with Cats
    for (int idx = 0; idx < arraySize / 2; idx++)
    {
        animals[idx] = new Dog();
    }
    for (int idx = arraySize / 2; idx < arraySize; idx++)
    {
        animals[idx] = new Cat();
    }
    
    std::cout << "\n===== TESTING SOUNDS =====" << std::endl;
    for (int idx = 0; idx < arraySize; idx++)
    {
        std::cout << animals[idx]->getType() << ": ";
        animals[idx]->makeSound();
    }
    
    std::cout << "\n===== DELETING ARRAY =====" << std::endl;
    for (int idx = 0; idx < arraySize; idx++)
    {
        delete animals[idx];
    }

    std::cout << "\n===== DEEP COPY TEST =====" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
    
    std::cout << "\n===== DEEP COPY TEST WITH BRAIN =====" << std::endl;
    Cat cat1;
    cat1.getBrain()->setIdea(0, "I love fish");
    cat1.getBrain()->setIdea(1, "I hate dogs");
    
    Cat cat2 = cat1; // Copy constructor
    
    std::cout << "Cat1 idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;
    
    cat2.getBrain()->setIdea(0, "I changed my mind");
    
    std::cout << "After modification:" << std::endl;
    std::cout << "Cat1 idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;
    
    return 0;
}
