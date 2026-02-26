/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:06:11 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:20:05 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	std::cout <<"Brain constructor called!"<<std::endl;
	index = 0;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor called!"<<std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout<<"Brain copy constructor called!"<<std::endl;
	*this = other;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout <<"Brain assignment operator called!"<<std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string	Brain::getIdeas() const
{
	return this->ideas[index];
}

void	Brain::setIdeas(std::string idea)
{
	this->ideas[index] = idea;
}