/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:55 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:38:49 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->type = src.type;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs) {
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor constructor called." << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Peowwww! Peowww!" << std::endl;
}