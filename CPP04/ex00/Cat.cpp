/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:12:53 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:26:45 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
};

Cat::Cat(const Cat & copy)
{
    this->type = copy.type;
    std::cout << "copy constructor called!" << std::endl;
};

Cat &Cat::operator=(Cat const & other)
{
    this->type = other.type;
    return (*this);
};

void Cat::makeSound() const
{
    std::cout << "Meawwwwww" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
};