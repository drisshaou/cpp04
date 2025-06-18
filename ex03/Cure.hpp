/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:07:35 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/24 11:44:59 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const& src);
		Cure& operator=(Cure const& rhs);
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);

};

#endif