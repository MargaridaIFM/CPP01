/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:24:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/01 15:24:23 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
	    Zombie(std::string str_name);
    	~Zombie();
    
    void announce();
        
    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif