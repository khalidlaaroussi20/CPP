/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:29:10 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:35:26 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#define SIZE_IDEAS 100


#include <iostream>
#include <string>

class Brain
{
	public :
		std::string ideas[SIZE_IDEAS];
		Brain();
		Brain (const Brain &other);
		
		// Operators 
		Brain& operator= (const Brain& other);
		~Brain();
};


#endif