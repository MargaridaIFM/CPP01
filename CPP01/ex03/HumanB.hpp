/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:28 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/14 22:01:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
        Weapon *BWeapon;
        std::string name;
        
    public:
    HumanB(std::string _name);
    ~HumanB();

    void setWeapon(Weapon &newWeapon);
    void attack();
};

#endif