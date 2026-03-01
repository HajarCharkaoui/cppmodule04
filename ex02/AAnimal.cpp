/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:19 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/01 17:57:20 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"


AAnimal::AAnimal()
{
	std::cout <<"AAnimal constructor called!"<<std::endl;
	type = "Aanimal";
}

AAnimal::~AAnimal()
{
	std::cout<<"AAnimal destructor called!"<<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout<<"AAnimal copy constructor called!"<<std::endl;
	*this = other;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	std::cout <<"AAnimal assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::makeSound() const {}