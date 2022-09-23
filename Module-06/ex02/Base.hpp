/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:41:01 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 17:54:05 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <iomanip> 
#include <string>
#include <cstdlib>

#define NUMBER_DERIVED_CLASS 3

class Base
{
	public :
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif