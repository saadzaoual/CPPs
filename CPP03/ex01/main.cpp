/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:57:40 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/16 06:26:00 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap basic actions ===" << std::endl;
    ClapTrap a("Clappy");
    a.attack("target");
    a.takeDamage(3);
    a.beRepaired(5);

    std::cout << "\n=== ScavTrap construction chaining ===" << std::endl;
    ScavTrap s1;
    ScavTrap s2("Scavy");

    std::cout << "\n=== ScavTrap behavior ===" << std::endl;
    s2.attack("enemy");
    s2.guardGate();

    std::cout << "\n=== ScavTrap copy/assign ===" << std::endl;
    ScavTrap s3(s2);
    ScavTrap s4;
    s4 = s2;

    std::cout << "\n=== End of scope (destructors) ===" << std::endl;
    return 0;
}