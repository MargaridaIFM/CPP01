/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:52:31 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/18 20:47:51 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl Constructer called." << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl Destructer Callled." << std::endl;
}
void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;

}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    // Array de strings:
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    // Array de ponteiros para as funcoes:
    void (Harl::*ptrFunctions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error        
    };
    
    for(int i = 0; i <= 3; i++)
    {
        if(level == levels[i])
        {
            (this->*ptrFunctions[i])();
            return;          
        }
    }
}
