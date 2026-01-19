/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:06:00 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:43:14 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog & copy);
        Dog &operator=(Dog const & other);
        void makeSound() const;
        Brain* getBrain() const;
        ~Dog();
};

#endif