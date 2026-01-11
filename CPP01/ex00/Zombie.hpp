/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 07:00:42 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/11 08:41:48 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{

    private:
        std::string name;
    public:
        Zombie(std::string n);
        ~Zombie();
        void announce(void);
};
Zombie* newZombie( std::string name);
void randomChump( std::string name);
#endif