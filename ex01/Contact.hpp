/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:03:25 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/13 15:03:06 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string scretPh;
        std::string phoneNumbre;
    public:
        Contact();
        ~Contact();
        void setFirstName(std::string fName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setSecretPh(std::string secret);
        void setPhoneNumber(std::string phoneNumber);
        std::string getFisrtN(void);
        std::string getLatsN(void);
        std::string getSec(void);
        std::string getNick(void);
        std::string getPhoneN(void);
};


#endif