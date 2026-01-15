/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:57:40 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/15 13:45:42 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== Test 1: Basic actions ===" << std::endl;
    ClapTrap a("Clappy");
    ClapTrap b("Trappy");

    a.attack("Trappy");
    b.takeDamage(0);
    b.beRepaired(5);

    std::cout << "\n=== Test 2: Energy exhaustion ===" << std::endl;
    for (int i = 0; i < 10; i++)
        a.attack("Trappy");

    // No energy left
    a.attack("Trappy");
    a.beRepaired(5);

    std::cout << "\n=== Test 3: Death case ===" << std::endl;
    b.takeDamage(20);
    b.attack("Clappy");
    b.beRepaired(5);

    std::cout << "\n=== Test 4: Copy constructor ===" << std::endl;
    ClapTrap c(b);
    c.attack("Someone");

    std::cout << "\n=== Test 5: Assignment operator ===" << std::endl;
    ClapTrap d;
    d = a;
    d.attack("Target");

    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}