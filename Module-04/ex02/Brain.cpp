/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:47:54 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called\n";
}

Brain::Brain (const Brain &other)
{
	std::cout << "Brain Copy constructor called\n";
	*this = other;
}

Brain& Brain::operator= (const Brain& other)
{
	std::cout << "Brain Copy assignment operator called\n";
	for (int i = 0; i < SIZE_IDEAS ;i++)
		ideas[i] = other.ideas[i];
	return (*this);
}


Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}
