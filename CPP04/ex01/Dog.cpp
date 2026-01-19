/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:05:56 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:45:04 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog & copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(Dog const & other)
{
    std::cout << "Dog assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "3aw" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->brain;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called!" << std::endl;
}