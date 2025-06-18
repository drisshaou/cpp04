/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:07:40 by drhaouha          #+#    #+#             */
/*   Updated: 2025/06/18 20:24:26 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

AMateria**	Character::_data = NULL;
int Character::_capacity = 0;
int Character::_size = 0;
int Character::_characters = 0;

Character::Character() : ICharacter() {
	// std::cout << "Character default constructor called." << std::endl;
	Character::_characters++;
}

Character::Character(std::string const& name) : ICharacter() {
	int	i;

	// std::cout << "Character parametric constructor called." << std::endl;
	this->_name = name;
	i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	Character::_characters++;
}

Character::Character(Character const& src) : ICharacter(src) {
	int	i;

	// std::cout << "Character copy constructor called." << std::endl;
	this->_name = src._name;
	i = -1;
	while (++i < 4) {
		this->_inventory[i] = NULL;
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i];
	}
	Character::_characters++;
}

Character& Character::operator=(Character const& rhs) {
	int	i;

	// std::cout << "Character assignment operator called." << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		i = -1;
		while (++i < 4) {
			this->_inventory[i] = NULL;
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i];
		}
	}
	return *this;
}

Character::~Character() {
	// std::cout << "Character destructor constructor called." << std::endl;
	Character::_characters--;
	if (Character::_characters == 0)
		this->clear();
}

std::string const& Character::getName() const {
	return this->_name;
}

void Character::clear() {
	int	i;

	i = -1;
	while (++i < Character::_capacity) {
		if (Character::_data[i])
			delete Character::_data[i];
		Character::_data[i] = NULL;
	}
	if (Character::_data)
		delete[] Character::_data;
	Character::_data = NULL;
	Character::_capacity = 0;
	Character::_size = 0;
}

void Character::add(AMateria* m) {
	AMateria**	new_data;
	int			i;

	i = -1;
	while (++i < Character::_size) {
		if (m != NULL && Character::_data[i] == m)
			return;
	}
	if (Character::_size == Character::_capacity) {
		Character::_capacity += 4;
		new_data = new AMateria*[Character::_capacity];
		i = -1;
		while (++i < Character::_size)
			new_data[i] = Character::_data[i];
		while (++i < Character::_capacity)
			new_data[i] = NULL;
		if (Character::_data)
			delete[] Character::_data;
		Character::_data = new_data;
	}
	Character::_data[Character::_size++] = m;
}

void Character::equip(AMateria* m) {
	int	i;

	if (!m)
		return;
	i = -1;
	while (++i < 4) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			break;
		}
	}
	this->add(m);
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}