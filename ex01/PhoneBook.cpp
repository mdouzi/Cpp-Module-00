/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:53:51 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/18 00:06:59 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
    std::cout<<"Awesome PhoneBook"<<std::endl;
}
PhoneBook::~PhoneBook(void)
{
    std::cout<<"say By By to the  Awesome PhoneBook" <<std::endl;
}

void PhoneBook::add(void)
{
    if (this->index > 7)
    {
        std::cout << "You're going to lose a contact. Overwriting the oldest one." << std::endl;
    }
    std::string firstName, lastName, nickname, darkestSecret, phoneNumber;

    while (firstName.empty())
    {
        if(std::cin.eof())
            return;
        std::cout << "Enter the first name of your contact: ";
        getline(std::cin, firstName);
    }
    this->Contacts[this->index % 8].setFirstName(firstName);

    while (lastName.empty())
    {
        if(std::cin.eof())
            return;
        std::cout << "Enter the last name of your contact: ";
        getline(std::cin, lastName);
    }
    this->Contacts[this->index % 8].setLastName(lastName);

    while (nickname.empty())
    {
        if(std::cin.eof())
            return;
        std::cout << "Enter the nickname of your contact: ";
        getline(std::cin, nickname);
    }
    this->Contacts[this->index % 8].setNickName(nickname);

    while (darkestSecret.empty())
    {
        if(std::cin.eof())
            return;
        std::cout << "Enter the darkest secret of your contact: ";
        getline(std::cin, darkestSecret);
    }
    this->Contacts[this->index % 8].setSecretPh(darkestSecret);

    while (phoneNumber.empty())
    {
        if(std::cin.eof())
            return;
        std::cout << "Enter the phone number of your contact: ";
        getline(std::cin, phoneNumber);
    }
    this->Contacts[this->index % 8].setPhoneNumber(phoneNumber);

    this->index++;
    return;
}

void PhoneBook::print_tab(void) 
{
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int index = 0; index < 8; index++) {
        if (Contacts[index].getFisrtN().size() > 0) {
            std::string str;

            str = std::to_string(index + 1);
            str.resize(10, ' ');
            std::cout << "|" << str;

            str = Contacts[index].getFisrtN();
            if (str.length() > 10) {
                str = str.substr(0, 9) + '.';
            }
            else {
                str.resize(10, ' ');
            }
            std::cout << "|" << str;

            str = Contacts[index].getLatsN();
            if (str.length() > 10) {
                str = str.substr(0, 9) + '.';
            }
            else {
                str.resize(10, ' ');
            }
            std::cout << "|" << str;
            
            str = Contacts[index].getNick();
            if (str.length() > 10) {
                str = str.substr(0, 9) + '.';
            }
            else {
                str.resize(10, ' ');
            }
            std::cout << "|" << str << "|" << std::endl;
        }
    }

    std::cout << " ------------------------------------------- " << std::endl;
}


void PhoneBook::search(void)
{
    if (this->index == 0)
    {
        std::cout << "No contacts in your PhoneBook." << std::endl;
        return;
    }
    else
        print_tab();

    std::cout << "Enter the index of the contact you want to search for (1-8): ";
    std::string line;

    while (true)
    {
        if (getline(std::cin, line) && !line.empty())
        {
            if(line.size() == 1 && line[0] >= '1' && line[0] <= '8')
            {
                int contactIndex = std::stoi(line);

                if (contactIndex >= 1 && contactIndex <= this->index)
                {
                    printContact(this->Contacts[contactIndex - 1]);
                    return;
                }
                else
                {   
                    std::cout << "Invalid index." << std::endl; 
                    std::cout<< "Please enter a valid index (1-" << this->index << "): ";
                }
            }
            else
            {
                std::cout << "Invalid index." << std::endl; 
                std::cout<< "Please enter a valid index (1-" << this->index << "): ";
            }
        }
        else if (std::cin.eof())
            return;
        else
            std::cout << "Invalid input. Please enter a valid index (1-" << this->index << "): ";
    }
}



void PhoneBook::printContact(Contact contact)
{
    std::cout << "First Name: " << contact.getFisrtN() << std::endl;
    std::cout << "Last Name: " << contact.getLatsN() << std::endl;
    std::cout << "Nickname: " << contact.getNick() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneN() << std::endl;
    std::cout << "Darkest Secret: " << contact.getSec() << std::endl;
}

Contact PhoneBook::getContact(int index)
{
    return(this->Contacts[index]);
}

