/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:32:35 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/14 21:49:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon();
        Weapon(std::string _type);
        ~Weapon();
        
        const std::string &getType();
        void setType(std::string new_type);
};

#endif