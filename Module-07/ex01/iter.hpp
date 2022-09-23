/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:58:34 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/19 14:14:57 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>


template <typename T1, typename T2, typename T3>
void iter(T1 array, T2 size, T3 func)
{
	for (T2 i = 0; i < size; i++)
		func(array[i]);
}


#endif