/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:22:19 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:49:25 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
	// std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(Cure const& src) : AMateria(src) {
	// std::cout << "Cure copy constructor called." << std::endl;
	this->type = src.type;
}

Cure& Cure::operator=(Cure const& rhs) {
	// std::cout << "Cure assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

Cure::~Cure() {
	// std::cout << "Cure destructor constructor called." << std::endl;
}

Cure* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}