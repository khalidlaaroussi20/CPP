/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:56:40 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 11:52:02 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d = DiamondTrap("khalid");
	d.takeDamage(20);
	d.beRepaired(10);
	d.attack("haitham");
	d.whoAmI();
	return (0);
}
