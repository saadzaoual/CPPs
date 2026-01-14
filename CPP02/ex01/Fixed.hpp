/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 07:09:03 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/14 12:55:57 by szaoual          ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& st, Fixed const& fixed);

#endif