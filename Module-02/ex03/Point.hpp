/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:00:34 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/10 14:59:07 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public :
		Point();
		Point(const float a, const float b);
		Point(const Point& other);
		Point& operator= (const Point& other);
		const Fixed getX( void ) const;
		const Fixed getY( void ) const;
		~Point();
		
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif