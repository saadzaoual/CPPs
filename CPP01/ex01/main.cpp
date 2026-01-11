/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 08:45:41 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/11 09:15:03 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "Horde");

    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}