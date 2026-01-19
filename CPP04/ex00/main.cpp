/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:18:02 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 14:01:19 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "===== CORRECT POLYMORPHISM =====" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n===== WRONG POLYMORPHISM =====" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

    wrongCat->makeSound();
    wrongAnimal->makeSound();

    std::cout << std::endl;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
