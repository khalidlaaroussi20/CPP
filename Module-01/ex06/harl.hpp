/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/08 17:50:31 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef HARL_HPP
#define  HARL_HPP

#include <iostream>
#include <string>

#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"

#define NUMBER_HARL 4

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();
		
		void complain( std::string level );
};


#endif