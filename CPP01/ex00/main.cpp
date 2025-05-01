/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/01 15:19:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie*  zombie1;

    zombie1 = newZombie("Antonio");
    zombie1->announce();
    randomChump("Maria");
    delete(zombie1);
    return(0); 
}
//Class (Template) -> Object (Binary) -> instance (Run of the binary)
//A instance cannot access another instance private members
