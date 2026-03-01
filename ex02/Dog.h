/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:46 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 14:08:57 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
	private:
		Brain	*dog_ideas;
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		void	makeSound() const;
		Brain*	getBrain() const;
		void	setBrain(Brain* new_brain);
};
#endif