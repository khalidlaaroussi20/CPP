/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/13 12:12:21 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
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