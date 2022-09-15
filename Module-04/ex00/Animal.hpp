/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 16:17:58 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP


#include <iostream>
#include <string>


class Animal
{
	protected :
		std::string type;
	
	public :
		Animal();
		Animal (const Animal &other);
		
		// Operators 
		Animal& operator= (const Animal& other);

		//getters
		std::string		getType() const;

		//function
		virtual void	makeSound() const;
		
		~Animal();
};

#endif