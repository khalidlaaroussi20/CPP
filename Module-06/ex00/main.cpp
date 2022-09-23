/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:03:37 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 13:20:45 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"


int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cout << "argument not Valid!!" << std::endl;
	}
	else
	{
		std::cout.setf(std::ios::fixed);
		std::string param = av[1];
		Converter converter = Converter(param);
		converter.printTypes();
	}
	return (0);
}