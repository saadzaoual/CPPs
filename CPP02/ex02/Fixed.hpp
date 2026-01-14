/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 07:09:03 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/14 14:26:36 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int value;
        static const int frac = 8;
    public:
    Fixed();
    
    Fixed(const int i);
    Fixed(const float f);
    
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;  
    int toInt( void ) const;

    bool	operator>(const Fixed& fixed) const;
    bool	operator<(const Fixed& fixed) const;
    bool	operator>=(const Fixed& fixed) const;
    bool	operator<=(const Fixed& fixed) const;
    bool	operator==(const Fixed& fixed) const;
    bool	operator!=(const Fixed& fixed) const;
    
    Fixed operator+(const Fixed& fixed) const;
    Fixed operator-(const Fixed& fixed) const;
    Fixed operator*(const Fixed& fixed) const;
    Fixed operator/(const Fixed& fixed) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);

    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& st, Fixed const& fixed);
#endif