/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:44 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/13 22:27:33 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie:: Zombie()
{
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
void Zombie::setName(std::string hordeName)
{
    name = hordeName;
}


