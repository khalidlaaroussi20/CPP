/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:10:28 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/23 14:15:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("khalid");
	zombie.announce();
	
	Zombie *z = newZombie("ayb");
	randomChump("aaa");
	
	delete z;
	return (0);
}