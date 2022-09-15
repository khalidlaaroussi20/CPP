/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:04:38 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/10 17:34:26 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Triangle.hpp"

Point::Point() : x(Fixed()), y(Fixed())
{
}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b))
{
	//std::cout << "aaa = " << x << " y = " << y << std::endl; 
}

Point::Point(const Point& other) :  x(other.x) , y(other.y)
{
	other.getX();
	//std::cout << "Coppy constructure!" << std::endl;
}

//operators

Point& Point::operator= (const Point& other)
{
	other.getX();
	return (*this);
}

const Fixed Point::getX( void ) const
{
	return (this ->x);
}

const Fixed Point::getY( void ) const
{
	return (this ->y);
}

Point::~Point()
{
	
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Triangle t = Triangle(a, b, c);
		return (t.bsp(point));
}