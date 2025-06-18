/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:22:19 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:53:31 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(Ice const& src) : AMateria(src) {
	// std::cout << "Ice copy constructor called." << std::endl;
	this->type = src.type;
}

Ice& Ice::operator=(Ice const& rhs) {
	// std::cout << "Ice assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

Ice::~Ice() {
	// std::cout << "Ice destructor constructor called." << std::endl;
}

Ice* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}