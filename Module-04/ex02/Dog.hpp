/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 12:12:26 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP



#include "AAnimal.hpp"

#include "Brain.hpp"


class Dog : public AAnimal
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