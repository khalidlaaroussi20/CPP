/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:41:28 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/19 12:12:25 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"


int main( void ) {
	int a = 2;
	int b = 3;
	TemplateMethods::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << TemplateMethods::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << TemplateMethods::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	TemplateMethods::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << TemplateMethods::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << TemplateMethods::max( c, d ) << std::endl;
	return 0;
}