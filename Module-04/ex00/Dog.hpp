/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 14:52:07 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"


class Dog : public Animal
{
	public :
		Dog();
		Dog (const Dog &other);
		
		// Operators 
		Dog& operator= (const Dog& other);

		//function
		void	makeSound() const;
		
		~Dog();
};

#endif