/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:39:56 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/06 11:07:35 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#define MAX_SIZE  3

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