/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:02:48 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:46:14 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal {
	public:
		Dog();
		Dog(Dog const& src);
		Dog& operator=(Dog const& rhs);
		~Dog();
		void	makeSound() const;

	private:
		Brain* brain;

};

#endif