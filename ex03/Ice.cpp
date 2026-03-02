/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:46:33 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/02 11:23:39 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
}

Ice& Ice::operator=(const Ice& other)
{
	(void)other;
	return *this;
}

Ice::~Ice() {}

Ice*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}