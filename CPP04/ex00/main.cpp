/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:18:02 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 10:47:42 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal{
    protected:
    std::string type;
    public:
    Animal(){
        this-> type = "animal";
        std::cout << "Animal constractor called!" << std::endl;
    };
    
    Animal::Animal(Animal & copy)
    {
	    this->type = copy.type;
	    std::cout << "Animal was constructed from a copy\n";
    };
    
    Animal & Animal::operator=(Animal const & other)
    {
	    this->type = other.type;
	    return (*this);
    }

    virtual void makeSound() const {
        std::cout << "ma333333 animal" << std::endl;
    };
    virtual ~Animal(){
        std::cout << "Animal destractor called!" << std::endl;
    };
};

class Dog : public Animal{
    public:
    Dog(){
        type = "iam a Dog";
    };
    void makeSound() const {
        std::cout << "3aw" << std::endl;
    };
    ~Dog(){};
};

class Cat : public Animal{
    public:
    Cat(){
        type = "iam a Cat";
    };
    void makeSound() const {
        std::cout << "myaw" << std::endl;
    };
    ~Cat(){};
};

int main()
{
    const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)
	animal->makeSound(); //will output the animal sound

	//std::cout << std::endl;
	//const WrongAnimal* wrong_animal = new WrongAnimal();
	//const WrongAnimal* wrong_cat = new WrongCat();

	//std::cout << std::endl;
	//wrong_cat->makeSound();
	//wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	//delete wrong_cat;
	//delete wrong_animal;
}