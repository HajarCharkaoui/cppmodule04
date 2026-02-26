/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:19 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 12:51:45 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"


Animal::Animal()
{
	std::cout <<"Animal constructor called!"<<std::endl;
	type = "animal";
}

Animal::~Animal()
{
	std::cout<<"Animal destructor called!"<<std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout<<"Animal copy constructor called!"<<std::endl;
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout <<"Animal assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string	Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Some generic animal sound..." << std::endl;
}