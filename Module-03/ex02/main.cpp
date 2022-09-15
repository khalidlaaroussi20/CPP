/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:56:40 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 16:04:08 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap f = FragTrap("khalid");
	f.takeDamage(20);
	f.beRepaired(10);
	f.attack("haitham");
	f.highFivesGuys();
	return (0);
}