/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:32:26 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/11 08:30:49 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main() {
    
    Zombie *newZombie1;
    newZombie1 = newZombie("New Zombie");
    newZombie1->announce();
    randomChump("Random Zombie");
    delete newZombie1;
    return 0;
}
