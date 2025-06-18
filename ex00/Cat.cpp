/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:36:06 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const& src) : Animal(src) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = src.type;
}

Cat& Cat::operator=(Cat const& rhs) {
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor constructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meowwww! Meowww!" << std::endl;
}