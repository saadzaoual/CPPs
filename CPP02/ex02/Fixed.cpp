/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 07:09:35 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/14 14:33:05 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){};

Fixed::Fixed(const Fixed& other){
    this->value = other.getRawBits();
};

Fixed& Fixed::operator=(const Fixed& other){
    if(this != &other)
    {
        this->value = other.getRawBits();
    }
    return *this;
};

Fixed::~Fixed(){};

int Fixed::getRawBits(void) const{
    return value;
};

void Fixed::setRawBits(int const raw){
    value = raw;
};

Fixed::Fixed(const int i){
    value = i << frac;
};

Fixed::Fixed(const float f){
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

bool	Fixed::operator>(const Fixed& fixed) const
{
	return (this->value > fixed.value);
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (this->value < fixed.value);
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (this->value >= fixed.value);
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (this->value <= fixed.value);
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (this->value == fixed.value);
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (this->value != fixed.value);
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits(this->value + fixed.value);
	return result;
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits(this->value - fixed.value);
	return result;
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits((this->value * fixed.value) >> frac);
	return result;
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	Fixed result;
	result.setRawBits((this->value << frac) / fixed.value);
	return result;
}

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->value;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.value <= second.value)
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.value <= second.value)
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.value >= second.value)
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.value >= second.value)
		return (first);
	else
		return (second);
}