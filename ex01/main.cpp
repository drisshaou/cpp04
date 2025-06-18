/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:03:00 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/26 12:37:46 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define TOTAL 4

int	main() {
	Animal const*	animals[TOTAL];
	int				i;

	i = -1;
	std::cout << "\033[0m" << "[CONSTRUCTORS]" << "\033[0m" << std::endl;
	while (++i < TOTAL) {
		if (i < TOTAL / 2) {
			std::cout << "\033[31m"; // RED
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else {
			std::cout << "\033[32m"; // GREEN
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}
	// to try assignement operator : remove 'const' in line 18 => Animal* animals[TOTAL];
	// std::cout << "\033[35m"; // Purple
	// *animals[0] = *animals[1];
	std::cout << std::endl << "\033[0m" << "[DESTRUCTORS]" << "\033[0m" << std::endl;
	i = -1;
	while (++i < TOTAL) {
		if (i < TOTAL / 2)
			std::cout << "\033[31m"; // RED
		else
			std::cout << "\033[32m"; // GREEN
		delete animals[i];
		std::cout << std::endl;
	}
	std::cout << "\033[0m";

	std::cout << "=======================DESTRUCTOR LEAKS TEST========================" << std::endl;
	// To test destructor leaks with valgrind remove virtual on Animal Destructor and -Wall -Werror -Wextra to compile
	Animal *dog1 = new Dog();
	std::cout << std::endl << "\033[0m\033[4mDog1 destruction:\033[0m\033[31m" << std::endl;
	delete dog1;
	std::cout << std::endl;
	std::cout << "\033[0m";

	std::cout << "--------------------------------------------------------------------" << std::endl << std::endl;
	// No leaks can be found here because of instance created with Dog
	Dog *dog2 = new Dog();
	std::cout << std::endl << "\033[0m\033[4mDog2 destruction:\033[0m\033[31m" << std::endl;
	delete dog2;
	std::cout << std::endl;
	std::cout << "\033[0m";

	std::cout << "=======================DEEP COPY TEST========================" << std::endl;
	// To test deep copy, to see if instances share same brain
	// After execution see two brains destroyed
	Cat	cat;
	std::cout << std::endl;
	Cat	tmp = cat; // Carefull here Cat tmp = cat; equal Cat tmp(cat) it is copy constructor (not assginment operator)
	std::cout << std::endl << "\033[4mCats destructions by system:\033[0m" << std::endl;

	return 0;
}