/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:28:47 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/01 15:52:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "The memory address of the string variable: " << &str <<std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR <<std::endl;
    std::cout << "The memory address held by stringREF: " <<  &stringREF <<std::endl;

    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR <<std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF <<std::endl;
        
    return (0);
}
