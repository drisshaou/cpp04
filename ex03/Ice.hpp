/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:07:35 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/24 11:43:04 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const& src);
		Ice& operator=(Ice const& rhs);
		~Ice();

		Ice* clone() const;
		void use(ICharacter& target);

};

#endif