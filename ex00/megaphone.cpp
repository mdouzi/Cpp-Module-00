/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:16:47 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 23:16:48 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int get_len(char *av)
{
    int i = 0;
    while(av[i])
        i++;
    return(i);
}

int main(int ac, char ** av)
{
    int nb_arg = ac - 1;

    if(nb_arg == 0)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for(int i = 1 ; i <= nb_arg ; ++i)
    {
        for(int j = 0; j < get_len(av[i]); ++j)
        {
            if(std::isupper(av[i][j]))
                std::cout << av[i][j];
            else
            {
                char c = std::toupper(av[i][j]);
                std::cout << c; 
            }
        }
    }
    return(0);
}
