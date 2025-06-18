/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:48 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:40:47 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		WrongAnimal& operator=(WrongAnimal const& rhs);
		virtual ~WrongAnimal();
		void			makeSound() const;
		std::string		getType() const;

	protected:
		std::string type;

};

#endif