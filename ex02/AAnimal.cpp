/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:17:27 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const& src) {
	std::cout << "AAnimal copy constructor called." << std::endl;
	this->type = src.type;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs) {
	std::cout << "AAnimal assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor constructor called." << std::endl;
}

std::string	AAnimal::getType() const {
	return this->type;
}