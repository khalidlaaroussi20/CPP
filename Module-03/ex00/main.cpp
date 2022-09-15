/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:56:40 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 14:08:22 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap = ClapTrap("khalid");
	clapTrap.takeDamage(20);
	clapTrap.beRepaired(10);
	clapTrap.attack("haitham");
	return (0);
}