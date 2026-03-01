/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:00 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 14:08:45 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
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