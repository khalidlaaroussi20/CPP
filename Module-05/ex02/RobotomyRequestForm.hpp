/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:31:25 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:34:15 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#define  ROBOTOMY_SIGN_REQUIRED 72
# define ROBOTOMY_EXECUTE_REQUIRED 45

# define ROBOTOMY_REQUEST_NAME "robotomy request"


#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	private :
		const std::string _target;
		RobotomyRequestForm();
		
	public :
		static int count;
		RobotomyRequestForm(const std::string  target);
		RobotomyRequestForm (const RobotomyRequestForm &other);
		
		// Operators 
		RobotomyRequestForm& operator= (const RobotomyRequestForm& other);

		//getters
		const std::string getTarget() const;
		//methods
		void	execute(Bureaucrat const & executor) const;
		void	printForm() const;

		~RobotomyRequestForm();
};



#endif