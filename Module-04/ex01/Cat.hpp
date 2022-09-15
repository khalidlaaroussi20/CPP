/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/12 15:38:44 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	private:
		Brain* brain;
	public :
		Cat();
		Cat (const Cat &other);
		
		// Operators 
		Cat& operator= (const Cat& other);

		//function
		void	makeSound() const;
		
		~Cat();
};

#endif