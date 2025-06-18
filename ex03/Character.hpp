/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:00:26 by drhaouha          #+#    #+#             */
/*   Updated: 2025/06/18 20:09:47 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter {
	public:
		Character(Character const& src);
		Character(std::string const& name);
		Character& operator=(Character const& rhs);
		~Character();
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		Character();
		void add(AMateria* m);
		void clear();
		static AMateria**	_data;
		static int			_capacity;
		static int			_size;
		static int			_characters;
		std::string			_name;
		AMateria*			_inventory[4];

};

#endif