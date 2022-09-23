/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:29:22 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 17:35:44 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main()
{
	Data data;
	data.x = 10;
	std::cout << "address = " << &data << std::endl;
	uintptr_t val = serialize(&data);
	std::cout << val << std::endl;
	Data *d = deserialize(val);
	std::cout << d << std::endl;
	return (0);
}
