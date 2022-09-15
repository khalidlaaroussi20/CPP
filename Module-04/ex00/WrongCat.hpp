/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:01:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


#include <iostream>
#include <string>

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat (const WrongCat &other);
		
		// Operators 
		WrongCat& operator= (const WrongCat& other);

		//function
		void	makeSound() const;
		
		~WrongCat();
};

#endif