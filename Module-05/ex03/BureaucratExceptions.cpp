/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratExceptions.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:46:06 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 12:21:50 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "Grade Too High !!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low !!";
}
