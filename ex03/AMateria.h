/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:43:43 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/02 11:19:04 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class ICharacter;

class AMateria{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif