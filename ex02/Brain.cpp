/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:39:05 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 11:47:31 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const& src) {
	int	i;

	std::cout << "Brain copy constructor called." << std::endl;
	i = -1;
	while (++i < 100)
		this->ideas[i] = src.ideas[i];
}

Brain& Brain::operator=(Brain const& rhs) {
	int	i;

	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &rhs) {
		i = -1;
		while (++i < 100)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor constructor called." << std::endl;
}
