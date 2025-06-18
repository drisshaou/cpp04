/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:48 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:45:52 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal {
	public:
		AAnimal();
		AAnimal(AAnimal const& src);
		AAnimal& operator=(AAnimal const& rhs);
		virtual ~AAnimal();
		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string type;

};

#endif