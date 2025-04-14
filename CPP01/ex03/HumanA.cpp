/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:19 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/14 22:01:36 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std:: string _name, Weapon &weaponType)
:AWeapon(weaponType)
{
    name = _name;
}
HumanA::~HumanA()
{
    
}
void HumanA::attack()
{
    std::cout << name << " attacks with their" << AWeapon.getType() << std::endl;
} 