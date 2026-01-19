/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:05:56 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:26:45 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this-> type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
};
    
Dog::Dog(const Dog & copy)
{
    this->type = copy.type;
    std::cout << "copy constructor called" << std::endl;
};

Dog &Dog::operator=(Dog const & other)
{
    this->type = other.type;
    return (*this);
};

void Dog::makeSound() const
{
    std::cout << "3aw" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
};