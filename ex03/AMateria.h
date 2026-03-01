/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:43:43 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 16:56:28 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class AMateria{
	protected:
		std::string	const & _type;
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