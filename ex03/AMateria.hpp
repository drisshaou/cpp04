/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:07:35 by drhaouha          #+#    #+#             */
/*   Updated: 2025/05/24 11:41:22 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class	ICharacter;

class	AMateria {
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& src);
		AMateria& operator=(AMateria const& rhs);
		virtual ~AMateria();
		
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	
	protected:
		std::string type;

};

#endif