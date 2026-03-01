/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:42:27 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/01 17:05:17 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() {}

Character::Character(std::string name) : _name(name)
{
	std::cout <<"Character constructor called!"<<std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout <<"Character destructor called!"<<std::endl;
}

Character::Character(const Character& other) : ICharacter(other){
	std::cout <<"Character copy constructor called!"<<std::endl;
	*this = other;
}

Character&	Character::operator=(const Character& other){
	std::cout <<"Character assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i]){
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
			if (other._inventory[i])
			{
				this->_inventory[i] = other._inventory[i]->clone();
			}
	}
	return *this;
}

std::string	const & Character::getName()
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx){
	for (int i = 0; i < 4; i++)
	{
		if (i == idx)
		{
			this->_inventory[i] = NULL;
			return ;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx){
			this->_inventory[i]->use(target);
			return ;
		}
	}
}

