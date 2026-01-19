/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:18:11 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:22:39 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this-> type = "Animal";
    std::cout << "WrongAnimal constructor called!" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal & copy)
{
	this->type = copy.type;
	std::cout << "copy constructor was called!" << std::endl;
};
    
WrongAnimal &WrongAnimal::operator=(WrongAnimal const & other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
};

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
};