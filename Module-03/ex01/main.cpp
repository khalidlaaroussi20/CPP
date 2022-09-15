/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:56:40 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 15:54:27 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap s = ScavTrap("khalid");
	s.takeDamage(20);
	s.beRepaired(10);
	s.attack("haitham");
	s.guardGate();
	return (0);
}