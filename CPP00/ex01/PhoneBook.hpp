/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:16:31 by szaoual           #+#    #+#             */
/*   Updated: 2025/12/26 18:18:12 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp" 
#include <iostream>
#include <iomanip> 

class PhoneBook {
    private:
        Contact _contacts[8];
        int     _index;
        int     _count;

    public:
        PhoneBook();
        ~PhoneBook();

        void    addContact();
        void    searchContacts();
};

#endif