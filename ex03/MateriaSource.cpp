/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 17:22:38 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/01 18:00:24 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		this->_source[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i])
			delete this->_source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++){
			if (this->_source[i]){
				delete this->_source[i];
				this->_source[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++){
			if (this->_source[i] == NULL)
			{
				this->_source[i] = other._source[i]->clone();
			}
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m) return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL)
		{
			this->_source[i]  = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	}
	return 0;
}
