/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:44 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/01 15:38:30 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{
    std::cout << "Zombie Constructer Called" << std::endl;
}
Zombie:: ~Zombie()
{
    std:: cout << name << ": Zombie Destructor Called" << std::endl;
}

void Zombie:: announce()
{
    std:: cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string hordeName)
{
    name = hordeName;
}


