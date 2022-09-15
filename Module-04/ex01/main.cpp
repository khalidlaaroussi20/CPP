/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:46:43 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 13:39:34 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

void Test()
{
	int sizeAnimals = 8;
	Animal *animals[sizeAnimals];
	int halfAnimals = sizeAnimals / 2;
	for (int i = 0; i < halfAnimals; i++)
		animals[i] = new Dog();
	for (int i = halfAnimals; i < sizeAnimals; i++)
		animals[i] = new Cat();
	
	for (int  i = 0; i < sizeAnimals; i++)
		animals[i]->makeSound();
		
	//free animals
	for (int  i = 0; i < sizeAnimals; i++)
		delete animals[i];
}

int main()
{
	Test();
	system ("leaks AAnimal");
	return 0;
}