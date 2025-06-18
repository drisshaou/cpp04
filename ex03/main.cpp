/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:03:00 by drhaouha          #+#    #+#             */
/*   Updated: 2025/06/18 20:53:38 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


int main() {
	std::cout << "=== Creating MateriaSource ===" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());  // multiple additions
	src2->learnMateria(new Ice());   // fills slot 4
	src2->learnMateria(new Cure());  // should do nothing (because full)


	IMateriaSource* src = new MateriaSource(*(MateriaSource*)src2);
	src->learnMateria(new Ice());  	// should do nothing (because full)
	src->learnMateria(new Cure());  // should do nothing (because full)

	delete src2;


	std::cout << "\n=== Creating a Character ===" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* be = new Character("be");

	std::cout << "\n=== Creating Materia from the source ===" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	be->equip(tmp);

	std::cout << "\n=== Using equiped Materia ===" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n=== Trying to equip too many Materia ===" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);  // too many Materia, should not equip

	std::cout << "\n=== Testing unequip ===" << std::endl;
	me->unequip(2);        // remove slot 2
	me->use(2, *bob);      // should do nothing

	std::cout << "\n=== Testing deep copy of Character (copy constructor) ===" << std::endl;
	// Character* copy = new Character(*(Character*)me);
	Character* copy = new Character(*dynamic_cast<Character*>(me));
	delete me;
	// me = NULL;
	copy->use(0, *bob);
	copy->use(1, *bob);

	std::cout << "\n=== Testing deep copy of Character (assignment operator) ===" << std::endl;
	Character* copy1 = new Character("copy1");
	tmp = src->createMateria("ice");
	copy1->equip(tmp);
	copy1->unequip(0);        // remove slot 0
	tmp = src->createMateria("cure");
	copy1->equip(tmp);
	copy1->equip(tmp);        // Try to send the same pointer, do nothing
	copy1->unequip(0);        // remove slot 0 (no more slot available)

	// to uncomment this lines comment the delete me up
	// // *copy1 = *(Character*)me;
	// *copy1 = *dynamic_cast<Character*>(me);
	// copy1->use(0, *me);
	// copy1->use(1, *me);

	std::cout << "\n=== Cleaning up ===" << std::endl;
	delete bob;
	// delete me;
	delete be;
	delete copy;
	delete copy1;
	delete src;


	return 0;
}






/* 
int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	ICharacter* frank = new Character("frank");

	me->use(0, *bob);
	me->use(1, *bob);

	me->use(1, *frank);
	me->use(6, *frank);

	delete bob;
	delete frank;
	delete me;
	delete src;
	return 0;
} */