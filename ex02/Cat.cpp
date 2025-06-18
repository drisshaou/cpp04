/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:49:02 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const& src) : AAnimal(src) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Cat& Cat::operator=(Cat const& rhs) {
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &rhs) {
		this->type = rhs.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destructor constructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meowwww! Meowww!" << std::endl;
}