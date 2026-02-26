/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:07:05 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 14:12:18 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"


WrongCat::WrongCat()
{
	std::cout <<"WrongCat constructor called!"<<std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor called!"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout<<"WrongCat copy constructor called!"<<std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout <<"WrongCat assignment operator called!"<<std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout <<"Meow!"<<std::endl;
}