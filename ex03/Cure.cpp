/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:37:45 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 17:40:03 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout<<"Cure copy constructer called!"<<std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout<<"Cure assignment operator called!"<<std::endl;
	(void)other;
	return *this;
}

Cure::~Cure()
{
	std::cout<<"Cure destructor called!"<<std::endl;
}

Cure*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout<<"* heals "  << target.getName()<< "’s wounds *"<< std::endl;
}