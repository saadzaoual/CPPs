/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:57:40 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/16 06:28:54 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << "\n=== FragTrap construction chaining ===" << std::endl;
    FragTrap f1;
    FragTrap f2("Fraggy");

    std::cout << "\n=== FragTrap behavior ===" << std::endl;
    f2.attack("enemy");
    f2.highFivesGuys();

    std::cout << "\n=== FragTrap copy/assign ===" << std::endl;
    FragTrap f3(f2);
    FragTrap f4;
    f4 = f2;

    std::cout << "\n=== End of scope (destructors) ===" << std::endl;
    return 0;
}