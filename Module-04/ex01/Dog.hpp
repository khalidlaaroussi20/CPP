/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:38:24 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"

#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain* brain;
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