/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:38:59 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/23 12:45:59 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain {
	public:
		Brain();
		Brain(Brain const& src);
		Brain& operator=(Brain const& rhs);
		~Brain();

		std::string ideas[100];

};

#endif