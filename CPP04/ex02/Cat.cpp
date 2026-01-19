/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:12:53 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:45:04 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat & copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(Cat const & other)
{
    std::cout << "Cat assignment operator called!" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meawwwwww" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->brain;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called!" << std::endl;
}