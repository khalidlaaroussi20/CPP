/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:20 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 12:24:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define  MAX_GRADE 1
# define MIN_GRADE 150

#include <iostream>
#include <string>

class Bureaucrat 
{
	private:
		const std::string  _name;
		int				   _grade;
		Bureaucrat();
		void	_isGradeTooLow();
		void	_isGradeTooHigh();
	
	public :
		class GradeTooHighException : public std::exception {
    		public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
    		public:
				const char* what() const throw();
		};
		Bureaucrat(const std::string  name, int grade);
		Bureaucrat (const Bureaucrat &other);
		
		// Operators 
		Bureaucrat& operator= (const Bureaucrat& other);
		Bureaucrat  operator ++(int);
		Bureaucrat  operator --(int);

		//getters
		const std::string	getName() const;
		int					getGrade() const;

		//function
		void	incrementGrade();
		void	decrementtGrade();
		~Bureaucrat();
};

std::ostream & operator << (std::ostream &out, const Bureaucrat &b);

#endif