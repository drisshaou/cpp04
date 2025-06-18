/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:04:38 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const& src) {
	std::cout << "Animal copy constructor called." << std::endl;
	this->type = src.type;
}

Animal& Animal::operator=(Animal const& rhs) {
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor constructor called." << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}

void	Animal::makeSound() const {
	std::cout << "Grrrrrrrrrrrrr! Grrrrr!" << std::endl;
}