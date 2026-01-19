/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:21:48 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:55:24 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal & copy);
        Animal &operator=(Animal const & other);
        virtual void makeSound() const = 0;
        virtual std::string getType( void ) const;
        virtual ~Animal();
};
#endif