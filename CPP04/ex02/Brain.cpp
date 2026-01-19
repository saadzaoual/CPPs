/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:37:53 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/19 13:43:14 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called!" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain assignment operator called!" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called!" << std::endl;
}

void Brain::setIdea(int idx, const std::string& idea){
    if (idx >= 0 && idx < 100)
        this->ideas[idx] = idea;
}

std::string Brain::getIdea(int idx) const{
    if (idx >= 0 && idx < 100)
        return this->ideas[idx];
    return "";
}