/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:07:40 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/26 13:33:19 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	// std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(AMateria const& src) {
	// std::cout << "AMateria copy constructor called." << std::endl;
	this->type = src.type;
}

AMateria& AMateria::operator=(AMateria const& rhs) {
	// std::cout << "AMateria assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

AMateria::AMateria(std::string const& type) : type(type) {
	// std::cout << "AMateria parametric constructor called." << std::endl;
}

AMateria::~AMateria() {
	// std::cout << "AMateria destructor constructor called." << std::endl;
}

std::string const& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}