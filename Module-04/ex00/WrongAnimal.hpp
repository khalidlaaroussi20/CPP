/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:00:14 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


#include <iostream>
#include <string>


class WrongAnimal
{
	protected :
		std::string type;
	
	public :
		WrongAnimal();
		WrongAnimal (const WrongAnimal &other);
		
		// Operators 
		WrongAnimal& operator= (const WrongAnimal& other);

		//getters
		std::string		getType() const;

		//function
		void	makeSound() const;
		
		~WrongAnimal();
};

#endif