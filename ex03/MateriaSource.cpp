/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:00:26 by drhaouha          #+#    #+#             */
/*   Updated: 2025/06/18 20:51:14 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

AMateria**	MateriaSource::_data = NULL;
int MateriaSource::_capacity = 0;
int MateriaSource::_size = 0;
int MateriaSource::_sources = 0;

MateriaSource::MateriaSource() : IMateriaSource() {
	int	i;

	// std::cout << "MateriaSource default constructor called." << std::endl;
	i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	MateriaSource::_sources++;
}

MateriaSource::MateriaSource(MateriaSource const& src) : IMateriaSource(src) {
	int	i;

	// std::cout << "MateriaSource copy constructor called." << std::endl;
	i = -1;
	while (++i < 4) {
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i];
		else
			this->_inventory[i] = NULL;
	}
	MateriaSource::_sources++;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
	int	i;

	// std::cout << "MateriaSource assignment operator called." << std::endl;
	if (this != &rhs) {
		i = -1;
		while (++i < 4) {
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	MateriaSource::_sources--;
	if (MateriaSource::_sources == 0)
		this->clear();
}


void MateriaSource::clear() {
	int	i;

	i = -1;
	while (++i < MateriaSource::_capacity) {
		if (MateriaSource::_data[i])
			delete MateriaSource::_data[i];
		MateriaSource::_data[i] = NULL;
	}
	if (MateriaSource::_data)
		delete[] MateriaSource::_data;
	MateriaSource::_data = NULL;
	MateriaSource::_capacity = 0;
	MateriaSource::_size = 0;
}

void MateriaSource::add(AMateria* m) {
	AMateria**	new_data;
	int			i;

	i = -1;
	while (++i < MateriaSource::_size) {
		if (m != NULL && MateriaSource::_data[i] == m)
			return;
	}
	if (MateriaSource::_size == MateriaSource::_capacity) {
		MateriaSource::_capacity += 4;
		new_data = new AMateria*[MateriaSource::_capacity];
		i = -1;
		while (++i < MateriaSource::_size)
			new_data[i] = MateriaSource::_data[i];
		while (++i < MateriaSource::_capacity)
			new_data[i] = NULL;
		if (MateriaSource::_data)
			delete[] MateriaSource::_data;
		MateriaSource::_data = new_data;
	}
	MateriaSource::_data[MateriaSource::_size++] = m;
}

void MateriaSource::learnMateria(AMateria* materia) {
	int		i;

	if (!materia)
		return;
	i = -1;
	while (++i < 4) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = materia;
			break;
		}
	}
	this->add(materia);
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	int	i;

	i = -1;
	while (++i < 4) {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return NULL;
}

