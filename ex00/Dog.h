/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:46 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 13:09:02 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		void	makeSound() const;
};
#endif