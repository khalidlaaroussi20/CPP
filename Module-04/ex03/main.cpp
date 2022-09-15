/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:51:08 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/14 13:37:46 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

void Test1()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	
	ICharacter* me = new Character("me");
	AMateria* tmp, *saver;
	tmp = src->createMateria("ice");
	saver = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	
	me->unequip(0);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	
	delete bob;
	delete me;
	delete src;
	delete saver;
}


void Test2()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	
	ICharacter* me = new Character("me");
	AMateria* tmp, *saver;
	tmp = src->createMateria("ice");
	saver = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	
	me->unequip(0);
	me->unequip(10);
	me->unequip(-1);
	ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	delete saver;
}
int main()
{
	Test2();
	system ("leaks a.out");
	return 0;
}