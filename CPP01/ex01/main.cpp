/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/01 15:42:49 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int nZomobies = 10;

    Zombie* Horde = zombieHorde(nZomobies, "Tony");
    if(Horde)
    {
        for(int i = 0; i < 10; i++)
            Horde[i].announce();
        delete[] Horde;
    }
    return (0);
}