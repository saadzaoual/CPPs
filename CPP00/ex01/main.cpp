/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:05:37 by szaoual           #+#    #+#             */
/*   Updated: 2025/12/26 18:25:59 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    
    PhoneBook book;
    std::string command;

    std::cout << "Welcome to the Awesome PhoneBook!" << std::endl;

    while (true) {
        std::cout << "> ";
        
        if (!std::getline(std::cin, command))
            break;

        if (command == "ADD") {
            book.addContact();
        } 
        else if (command == "SEARCH") {
            book.searchContacts();
        } 
        else if (command == "EXIT") {
            break; 
        }
    }

    return 0;
}