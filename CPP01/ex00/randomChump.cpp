/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:02:32 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/12 21:51:38 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void randomChump( std::string name )
{
    Zombie Z = Zombie(name);
    Z.announce();
}
