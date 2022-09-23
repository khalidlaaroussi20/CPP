/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:55:10 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:20:00 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#define  MAX_GRADE 1
# define MIN_GRADE 150

#include <iostream>
#include <string>
#include <fstream>


#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const		std::string _name;
		bool		_isSigned;
		const int	_signGrade;
		const int	_executeGrade;
		void	_isGradeTooLow();
		void	_isGradeTooHigh();
		
	public :
		Form();
		class GradeTooHighException : public std::exception {
    		public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
    		public:
				const char* what() const throw();
		};
		Form(const std::string  name, bool isSigned, const int signGrade, const int executeGrade);
		Form (const Form &other);
		
		// Operators 
		Form& operator= (const Form& other);

		//getters
		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;

		//methods
		void			beSigned(Bureaucrat const & bureaucrat);
		bool			isValidToExecute(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;
		virtual void	printForm() const = 0;


		virtual ~Form();
};
std::ostream & operator << (std::ostream &out, const Form &f);


#endif