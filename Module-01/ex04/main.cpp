/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:49:24 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 15:48:35 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string getReplacedString(std::string line , std::string s1 , std::string s2)
{
	std::cout << line << std::endl;
	std::string replacedString = "";
	for (size_t i = 0; i < line.length();i++)
	{
		size_t j = 0;
		for (; j < s1.length() && i + j < line.length();j++)
		{
			if (line[i + j] != s1[j])
				break;
		}
		if (j == s1.length())
		{
			replacedString += s2;
			i += s1.length()  - 1;
		}
		else
			replacedString += line[i];
	}
	return (replacedString);
}

void replaceInputFile(std::ifstream &readFile, std::ofstream &writeFile, std::string s1, std::string s2)
{
	std::string line;
	while ( std::getline(readFile,line) )
    {
		line = getReplacedString(line ,s1, s2);
		writeFile << line << std::endl;;
    }
    readFile.close();
	writeFile.close();
}
int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Argument not valid !!" << std::endl;
	}
	else
	{
		std::string fileName = av[1], s1 = av[2], s2 = av[3];
		std::ifstream readFile;
		std::ofstream writeFile;
		readFile.open(fileName);
		if (readFile.is_open())
		{
			writeFile.open(fileName + ".replace");
			if (writeFile.is_open())
			{
				replaceInputFile(readFile,writeFile, s1, s2);
			}
			else
				std::cout << "Failed to Open replace file : "  << std::endl;
		}
		else
			std::cout << "Failed to Open file : " << fileName << std::endl;
		
		
	}
	return (0);
}