/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:13:12 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:26:45 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat & copy);
        Cat &operator=(Cat const & other);
        void makeSound() const;
        ~Cat();
};
#endif