/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:49:23 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/10 14:37:06 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

class Triangle
{
	private:
		const Point a;
		const Point b;
		const Point c;
	public :
		Triangle();
		Triangle(const Point a, const Point b, const Point c);
		Triangle(const Triangle& other);
		Triangle& operator= (const Triangle& other);
		const Fixed area() const;
		bool bsp( Point const point);
		~Triangle(); 
};