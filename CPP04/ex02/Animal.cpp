/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:21:53 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:55:22 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this-> type = "animal";
    std::cout << "Animal constructor called!" << std::endl;
};
Animal::Animal(const Animal & copy)
{
	this->type = copy.type;
	std::cout << "copy constructor called!" << std::endl;
};

Animal &Animal::operator=(Animal const & other)
{
	this->type = other.type;
	return (*this);
};

std::string Animal::getType( void ) const
{
	return (this->type);
};

Animal::~Animal(){
    std::cout << "Animal destructor called!" << std::endl;
};