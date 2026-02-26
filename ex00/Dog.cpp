/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:54 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 13:09:25 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"


Dog::Dog()
{
	std::cout <<"Dog constructor called!"<<std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout<<"Dog destructor called!"<<std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout<<"Dog copy constructor called!"<<std::endl;
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout <<"Dog assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout <<"Woof!"<<std::endl;
}