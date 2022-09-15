/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 12:09:53 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP


#include <iostream>
#include <string>


class AAnimal
{
	protected :
		std::string type;
	
	public :
		AAnimal();
		AAnimal (const AAnimal &other);
		
		// Operators 
		AAnimal& operator= (const AAnimal& other);

		//getters
		std::string		getType() const;

		//function
		virtual void	makeSound() const = 0; //pure Virtual Function
		
		virtual			~AAnimal();
};

#endif