/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 07:09:35 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/14 12:56:04 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
};

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->value = other.getRawBits();
    }
    return *this;
};

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const{
    return value;
};

void Fixed::setRawBits(int const raw){
    value = raw;
};

Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    value = i << frac;
};

Fixed::Fixed(const float f){
    std::cout << "Float constructor called" << std::endl;
    value = roundf(f * (1 << frac));
};

float Fixed::toFloat( void ) const{
    return (float)value / (1 << frac) ;
};

int Fixed::toInt( void ) const{
    return value >> frac;
};

std::ostream& operator<<(std::ostream& st, const Fixed& fixed){
    st << fixed.toFloat();
    return st;
}