/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:32 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/14 21:58:57 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon Constructer Called" << std::endl;
}

Weapon::Weapon(std::string _type)
{
    type = _type;
    std::cout << "crude spiked club" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructer Called" << std::endl;
}
const std::string& Weapon::getType()
{
    std::string& strREF = type; 
    return(strREF);
}
void Weapon:: setType(std:: string new_type)
{
    type = new_type;
}