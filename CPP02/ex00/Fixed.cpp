/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:50:43 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/12 16:56:50 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

Fixed::Fixed(): value(0){
    std::cout << "Default constructor called" << std::endl;
};
        
Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    this-> value = other.value;
};
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.value;
    }
    return *this;
    }
int Fixed::getRawBits( void ) const{
            std::cout << "getRawBits member function called" << std::endl;
             return value;  
};

void Fixed::setRawBits( int const raw ){
    value = raw;
};

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
};