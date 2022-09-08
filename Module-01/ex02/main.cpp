/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:46:14 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 10:54:52 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *sPtr = &s;
	std::string &sRef = s;
	std::cout << "Adresses : \n";
	std::cout  << &s << std::endl;
	std::cout  << sPtr << std::endl;
	std::cout  << &sRef << std::endl;

	std::cout << "\nValues : \n";
	std::cout  << s << std::endl;
	std::cout  << *sPtr << std::endl;
	std::cout  << sRef << std::endl;
	return (0);
}