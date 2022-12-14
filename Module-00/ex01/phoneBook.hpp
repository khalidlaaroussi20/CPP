

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:54:21 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/05 17:40:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#define MAX_SIZE  8

#include <iostream>
#include <string>
#include "contact.hpp"


class PhoneBook
{
	public:
		int	size;
		int	curr_idx;
		Contact phonesBook[MAX_SIZE];
		PhoneBook();
		void	add(Contact contact);
		bool	isExist(int id);
		Contact search(int id);
		void	showPhonesBook();
};

#endif