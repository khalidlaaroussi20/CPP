/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:51:46 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/10 17:41:35 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Triangle.hpp"

Triangle::Triangle() : a(Point()), b(Point()), c(Point())
{
	
}

Triangle::Triangle(const Point a, const Point b, const Point c) : a(a), b(b), c(c)
{
	// std::cout << "aaa = " << a.getX() << " y = " << a.getY() << std::endl; 
}

Triangle::Triangle(const Triangle& other)
{
	*this = other;
}

Triangle& Triangle::operator= (const Triangle& other)
{
	(void)other;
	return (*this);
}


const Fixed Triangle::area() const
{
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool Triangle::bsp( Point const point)
{
	Fixed w1 , w2;
	w1 = (a.getX() * (c.getY() - a.getY()) + ((point.getY() - a.getY()) * (c.getX() - a.getX())) - (point.getX() * (c.getY() - a.getY()))) / \
	(((b.getY() - a.getY()) * (c.getX() - a.getX())) - (b.getX() - a.getX()) * (c.getY() - a.getY()));
	w2 = (point.getX() - point.getY() - a.getX() + a.getY() - ( w1 * (b.getX() - a.getX() - b.getY() + a.getY()) )) / \
	(c.getX() - a.getX() - c.getY() + a.getY());
	if (w1 >= 0 && w2 >= 0 && w1 + w2 < 1)
		return (true);
	return (false);
}

Triangle::~Triangle()
{
	
}