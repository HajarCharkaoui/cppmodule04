/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:37:45 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/02 11:22:56 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other)
{
	*this = other;
}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	return *this;
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout<<"* heals "  << target.getName()<< "’s wounds *"<< std::endl;
}