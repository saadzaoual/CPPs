/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:30:00 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/15 13:48:03 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : name("default"), hp(10), ep(10), atk(0) {
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), atk(0) {
    std::cout << "ClapTrap Constructor for " << name << " called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hp = other.hp;
        this->ep = other.ep;
        this->atk = other.atk;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor for " << name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (ep > 0 && hp > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target 
                  << ", causing " << atk << " points of damage!" << std::endl;
        ep--;
    }
    else if (ep == 0) {
        std::cout << "ClapTrap " << name << " has no energy points left to attack!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " has no hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hp <= 0) {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    
    if ((unsigned int)hp > amount) {
        hp -= amount;
    }
    else {
        hp = 0;
    }
    
    std::cout << "ClapTrap " << name << " now has " << hp << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (ep > 0 && hp > 0) {
        hp += amount;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount 
                  << " hit points! Now has " << hp << " hit points." << std::endl;
        ep--;
    }
    else if (ep == 0) {
        std::cout << "ClapTrap " << name << " has no energy points left to repair!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " has no hit points left to repair!" << std::endl;
    }
}
