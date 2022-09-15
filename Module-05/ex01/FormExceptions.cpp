/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormExceptions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:46:06 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 14:18:10 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw ()
{
	return "Grade Too High !!";
}

const char* Form::GradeTooLowException::what() const throw ()
{
	return "Grade Too Low !!";
}
