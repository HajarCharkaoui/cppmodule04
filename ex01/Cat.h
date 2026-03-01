/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:00 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 12:49:55 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
	private:
		Brain	*cat_ideas;
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		void	makeSound() const;
		Brain*	getBrain() const;
		void	setBrain(Brain* new_brain);
};
#endif