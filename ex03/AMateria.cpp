/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:43:50 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 16:56:44 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		(void)other;
	}
	return *this;
}

std::string const & AMateria::getType() const{
	return this->_type;
}

AMateria* AMateria::clone() const {}

void AMateria::use(ICharacter& target){
	(void)target;
}