/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:11:15 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:26:45 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
};

WrongCat::WrongCat(const WrongCat & copy)
{
    this->type = copy.type;
    std::cout << "copy constructor called!" << std::endl;
};
    
WrongCat &WrongCat::operator=(WrongCat const & other)
{
	this->type = other.type;
	return (*this);
};
    
void WrongCat::makeSound() const
{
    std::cout << "Meaw" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
};