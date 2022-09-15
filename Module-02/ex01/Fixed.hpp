/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:17:37 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/11 11:37:01 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
#define  FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBit = 8;
	
	public:
		Fixed();
		Fixed(const int fixedPoint);
		Fixed(const float fixedPoint);
		Fixed (const Fixed &other);
		
		
		
		// Operators 
		Fixed& operator= (const Fixed& fixed);
		
		//getters
		int		getRawBits( void ) const;
		
		//setters
		void	setRawBits(  int const raw );

		//functions

		float	toFloat( void ) const;
		int		toInt( void ) const;

		~Fixed();
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif