/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:07 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:45:57 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"


Cat::Cat()
{
	std::cout <<"Cat constructor called!"<<std::endl;
	type = "Cat";
	cat_ideas = new Brain();
}

Cat::~Cat()
{
	std::cout<<"Cat destructor called!"<<std::endl;
	delete	cat_ideas;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout<<"Cat copy constructor called!"<<std::endl;
	this->cat_ideas = NULL;
	*this = other;
	// std::cout <<"Address of this object :"<< this << " ,other: "<< &other <<std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout <<"Cat assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete	this->cat_ideas;
		this->cat_ideas = new Brain(*(other.cat_ideas));
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout <<"Meow!"<<std::endl;
}