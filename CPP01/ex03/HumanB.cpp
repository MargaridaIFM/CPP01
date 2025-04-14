/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:25 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/14 22:01:31 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(std::string _name)
{
    name = _name;
    BWeapon = NULL;
}
HumanB:: ~HumanB()
{
}
void HumanB:: setWeapon(Weapon &newWeapon)
{
    BWeapon = &newWeapon;
}
void HumanB::attack()
{
    if(BWeapon)
    {
        std::cout  << name << " attacks with their" << BWeapon->getType() << std::endl; 
    } 
    else 
        std:: cout << name << " have no weapon to attack." << std::endl;   
}