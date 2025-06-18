/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:00:26 by drhaouha          #+#    #+#             */
/*   Updated: 2025/06/18 20:44:50 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& src);
		MateriaSource& operator=(MateriaSource const& rhs);
		~MateriaSource();
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const& type);

	private:
		void add(AMateria* m);
		void clear();
		static AMateria**	_data;
		static int			_capacity;
		static int			_size;
		static int			_sources;

		AMateria*	_inventory[4];

};

#endif