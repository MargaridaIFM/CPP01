/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:54:54 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/18 22:05:54 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
    if(argc != 2)
    {
        std::cerr << "Wrong number of arguements." << std::endl;
        return (1);
    }
    
    int i = getIndexLevel(argv[1]);
    
    switch (i)
    {
        case 0:
            harl.complain("DEBUG");
            // fall through
        case 1:
            harl.complain("INFO");
            // fall through
        case 2:
            harl.complain("WARNING");
            // fall through
        case 3:
            harl.complain("ERROR");
            break;
        default:
         std:: cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
    
    }
    return(0);
}