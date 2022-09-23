/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:44 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/19 13:51:19 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>
class TemplateMethods
{
	public:
		template <typename T>
		static void swap(T &a, T &b)
		{
			T tmp = a;
			a = b;
			b = tmp;
		}
		
		template <typename T>
		static  T min(T &a, T &b)
		{
			if (a < b)
				return (a);
			return (b);
		}
		
		template <typename T>
		static  T max(T &a, T &b)
		{
			if (a > b)
				return (a);
			return (b);
		}
};


#endif