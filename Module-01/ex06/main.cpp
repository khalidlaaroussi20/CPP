/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:58:10 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/23 14:40:55 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Argument not valid!!" << std::endl;
	}
	else
	{
		std::string level;
		level = av[1];
		Harl harl;
		harl.complain(level);	
	}
	return (0);
}