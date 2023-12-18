/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:54:20 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/13 14:46:07 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Contacts[8];
        int index;
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
        void printContact(Contact contact);
        void print_tab(void);
        Contact getContact(int index);
};

#endif 