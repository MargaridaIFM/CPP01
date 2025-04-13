/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/13 22:25:04 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./zombie.hpp"

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