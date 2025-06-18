/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:48 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/26 12:22:05 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal {
	public:
		Animal();
		Animal(Animal const& src);
		Animal& operator=(Animal const& rhs);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string type;

};

#endif