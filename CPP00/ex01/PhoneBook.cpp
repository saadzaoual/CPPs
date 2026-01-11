/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:19:59 by szaoual           #+#    #+#             */
/*   Updated: 2025/12/28 20:43:59 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _count(0) {}

PhoneBook::~PhoneBook() {}

static std::string truncate(std::string str) {
    if (str.length(z) > 10)
        return str.substr(0, 9) + ".";
    return str;
}

static std::string getInput(std::string prompt) {
    std::string input = "";
    while (true) {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            exit(0);
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty!" << std::endl;
    }
    return input;
}

void PhoneBook::addContact() {
    Contact newContact;

    newContact.setFirstName(getInput("First Name: "));
    newContact.setLastName(getInput("Last Name: "));
    newContact.setNickname(getInput("Nickname: "));
    newContact.setPhoneNumber(getInput("Phone Number: "));
    newContact.setDarkestSecret(getInput("Darkest Secret: "));

    _contacts[_index] = newContact;
    _index = (_index + 1) % 8;
    if (_count < 8)
        _count++;

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts() {
    if (_count == 0) {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < _count; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(_contacts[i].getNickname()) << std::endl;
    }

    std::cout << "Enter index to display: ";
    std::string input;
    if (!std::getline(std::cin, input))
        return;

    int index = -1;
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
        index = input[0] - '0';

    if (index < 0 || index >= _count) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}
