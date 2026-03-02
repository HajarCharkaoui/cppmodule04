/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:42:27 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/02 11:22:32 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() {}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
}

Character::Character(const Character& other) : ICharacter(other){
	*this = other;
}

Character&	Character::operator=(const Character& other){
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

std::string	const & Character::getName() const
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

