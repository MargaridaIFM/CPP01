/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/12 21:51:15 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie*  zombie1;

    zombie1 = newZombie("Antonio");
    zombie1->announce();
    randomChump("Maria");
    delete(zombie1);
    return(0); 
}