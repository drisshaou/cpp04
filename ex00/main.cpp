/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:03:00 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/26 12:27:20 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// const Animal* meta;   // Ce que pointe le pointeur est constant (classe constante)
// Animal const* meta;   // Même chose, juste ordre inversé
// Animal* const meta;   // ici, le pointeur lui-même est constant

// Animal const* const meta;   // Pointeur constant et classe constante
// const Animal* const meta;   // Même chose, juste ordre inversé

int main() {
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	j->makeSound();
	std::cout << std::endl;
	i->makeSound();
	std::cout << std::endl;
	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << "==================================================" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wi = new WrongCat();
	std::cout << std::endl;
	const WrongCat* wi1 = new WrongCat();
	std::cout << std::endl;
	std::cout << wi->getType() << " " << std::endl;
	std::cout << std::endl;
	std::cout << wi1->getType() << " " << std::endl;
	std::cout << std::endl;
	wmeta->makeSound();
	std::cout << std::endl;
	wi->makeSound(); // make its own sound because of WrongAnimal on construction
	std::cout << std::endl;
	wi1->makeSound(); // make its own sound because of WrongCat on construction
	std::cout << std::endl;

	delete wmeta;
	std::cout << std::endl;
	delete wi;
	std::cout << std::endl;
	delete wi1;

	return 0;
}
