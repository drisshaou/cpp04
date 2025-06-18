/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:36:28 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const& src) : Animal(src) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = src.type;
}

Dog& Dog::operator=(Dog const& rhs) {
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor constructor called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Waf! Waf!" << std::endl;
}