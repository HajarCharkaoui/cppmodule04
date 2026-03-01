/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:46:33 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 17:38:57 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout<<"Ice copy constructer called!"<<std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout<<"Ice assignment operator called!"<<std::endl;
	(void)other;
	return *this;
}

Ice::~Ice()
{
	std::cout<<"Ice destructor called!"<<std::endl;
}

Ice*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}