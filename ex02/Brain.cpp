/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:06:11 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 12:29:53 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	std::cout <<"Brain constructor called!"<<std::endl;
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

std::string	Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	return "";
}

void	Brain::setIdeas(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}