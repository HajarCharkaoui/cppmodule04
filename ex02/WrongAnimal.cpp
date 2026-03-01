/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:07:11 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 14:09:19 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"


WrongAnimal::WrongAnimal()
{
	std::cout <<"WrongAnimal constructor called!"<<std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor called!"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout<<"WrongAnimal copy constructor called!"<<std::endl;
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout <<"WrongAnimal assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some generic WrongAnimal sound..." << std::endl;
}