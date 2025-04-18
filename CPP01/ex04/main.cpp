/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:25:55 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/18 20:48:36 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int FindReplaceInfile(const std:: string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream infile;
    std::ofstream newFile;
    
    infile.open(filename.c_str());
    newFile.open((filename + ".replace").c_str());
    if(infile.fail() || newFile.fail())
    {
        std::cerr << "Error: cannot open the file " << filename << " or " << filename << ".replace" << std::endl;
        return (0);
    }
    
    std::string line;
    while(std::getline(infile, line))
    {
        std::string newLine;
      std::size_t pos = 0;
      std::size_t new_pos = 0;
      while((pos = line.find(s1, new_pos)) != std::string::npos)
      {
        newLine += line.substr(new_pos, pos - new_pos);
        newLine += s2;
        new_pos = pos + s1.length(); 
     }
    newLine += line.substr(new_pos);
    newFile << newLine << "\n";
    }
    infile.close();
    newFile.close();
    
    return(1);
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std:: cerr << "Wrong number of arguments!" << std::endl;
        return(1);        
    }
   std:: string s1, s2, filename;
   filename = argv[1];
   s1 = argv[2];
   s2 = argv[3];
   
   if(filename.empty() || s1.empty())
   {
        std:: cerr << "The first and/or second arguments cannot be empty" << std::endl;
        return(2);
   }
   if(!FindReplaceInfile(filename, s1, s2))
        return(3);
   return(0);
}