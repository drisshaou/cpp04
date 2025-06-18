/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:37:45 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->type = src.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs) {
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor constructor called." << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Psst! Pssssssssst!" << std::endl;
}