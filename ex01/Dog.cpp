/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:54 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:30:53 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"


Dog::Dog()
{
	std::cout <<"Dog constructor called!"<<std::endl;
	type = "Dog";
	dog_ideas = new Brain();
}

Dog::~Dog()
{
	std::cout<<"Dog destructor called!"<<std::endl;
	delete	dog_ideas;
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
		delete	this->dog_ideas;
		this->dog_ideas = new Brain(*(other.dog_ideas));
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout <<"Woof!"<<std::endl;
}