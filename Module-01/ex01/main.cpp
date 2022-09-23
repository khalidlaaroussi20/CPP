/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:07:58 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/23 14:22:13 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main()
{
	Zombie *zombies;
	int N = 3;
	zombies = zombieHorde(N, "khalid");
	if (zombies)
	{
		for (int i = 0; i < N;i++)
		{
			zombies[i].announce();
		}
		delete [] zombies;	
	}
	return (0);
}