/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:00:00 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/16 06:25:07 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hp = 100;
    ep = 50;
    atk = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hp = 100;
    ep = 50;
    atk = 20;
    std::cout << "ScavTrap Constructor for " << this->name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor for " << name << " called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (ep > 0 && hp > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << atk << " points of damage!" << std::endl;
        ep--;
    }
    else if (ep == 0) {
        std::cout << "ScavTrap " << name << " has no energy points left to attack!" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << name << " has no hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
