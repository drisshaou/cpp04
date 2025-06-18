/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:44:52 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const& src) : Animal(src) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog& Dog::operator=(Dog const& rhs) {
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs) {
		this->type = rhs.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor constructor called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Waf! Waf!" << std::endl;
}