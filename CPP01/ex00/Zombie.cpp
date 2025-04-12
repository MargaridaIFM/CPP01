/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:44 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/12 21:53:37 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie:: Zombie(std::string str_name)
{
    name = str_name;
    std::cout << "Zombie Constructer Called" << std::endl;
}
Zombie:: ~Zombie()
{
    std:: cout << "Zombie Destructor Called" << std::endl;
}

void Zombie:: announce()
{
    std:: cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

