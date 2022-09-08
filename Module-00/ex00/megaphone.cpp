/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:58:50 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/07 20:20:35 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
	else
	{
		for (int j = 1 ; j < ac ;j++)
		{
			std::string s = av[j];
			for (size_t i = 0 ; i < s.length(); i++)
				std::cout << (char) std::toupper(s[i]);
		}
	}
	std::cout << std::endl;
	return (0);
}