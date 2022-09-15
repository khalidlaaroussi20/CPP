/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:17:37 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/09 14:13:45 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
#define  FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBit = 8;
	
	public:
		Fixed();
		Fixed (const Fixed &other);
		// Overloaded assignment
		Fixed& operator= (const Fixed& fixed);
		// {
		// 	fixedPoint = fixed.fixedPoint;
		// 	return (*this);
		// }
		
		//getters
		int		getRawBits( void ) const;
		
		//setters
		void	setRawBits(  int const raw );

		~Fixed();
};


#endif