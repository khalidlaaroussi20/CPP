/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:14:29 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/23 14:43:10 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	//std::cout << "Harl Constructure !!" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*complaints[]) ( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {DEBUG, INFO, WARNING, ERROR};
	for (size_t i = 0; i < NUMBER_HARL ; i++)
	{
		if (level == levels[i])
		{
			(this ->*complaints[i])();
			return ;
		}
	}
	std::cout << "Not Found!!" << std::endl;
}

Harl::~Harl()
{
	// std::cout << "Harl Destructure !!" << std::endl;
}

