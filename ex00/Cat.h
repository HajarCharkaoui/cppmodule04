/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:00 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 13:09:11 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		void	makeSound() const;
};
#endif