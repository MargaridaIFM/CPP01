/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:53:23 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/18 20:48:27 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if(argc != 2)
    {
        std::cerr << "Wrong number of arguments." << std::endl;
        return(1);
    }
    harl.complain(argv[1]);
    return(0);
}