/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:54:49 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 22:56:02 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact:: Contact(void)
{
    
}

Contact:: ~Contact(void)
{
    
}

void Contact:: setFirstName(std::string fName)
{
    this->firstName = fName;   
}
void Contact:: setLastName(std::string lastName)
{
    this->lastName = lastName;
}
void Contact:: setNickName(std::string nickName)
{
    this->nickName = nickName;
}
void Contact:: setSecretPh(std::string secret)
{
    this->scretPh = secret;
}
void Contact:: setPhoneNumber(std:: string phoneNumber)
{
    this->phoneNumbre = phoneNumber;
}
std::string Contact::getFisrtN(void)
{
    return(this->firstName);
}
std::string Contact::getLatsN(void)
{
    return(this->lastName);
}
std::string Contact::getNick(void)
{
    return(this->nickName);
}
std::string Contact::getPhoneN(void)
{
    return(this->phoneNumbre);
}
std::string Contact::getSec(void)
{
    return(this->scretPh);
}