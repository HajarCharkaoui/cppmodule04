/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:12 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 13:10:09 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		std::string	getType() const;
		virtual void	makeSound() const;
};
#endif