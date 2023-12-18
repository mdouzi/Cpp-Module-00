/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 02:19:09 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 22:55:46 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{
    std::string line;
    PhoneBook phB;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, line);
        if (line == "ADD")
            phB.add();
        else if (line == "SEARCH")
            phB.search();
        else if (line == "EXIT")
            return 0;
        if (std::cin.eof())
            break;
    }
    return 0;
}
