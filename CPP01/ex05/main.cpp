/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 10:21:28 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/11 10:35:16 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << std::endl << "DEBUG Level:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl << "INFO Level:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl << "WARNING Level:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl << "ERROR Level:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl << "No valid Level:" << std::endl;
    harl.complain("ALARM");
    return 0;
}