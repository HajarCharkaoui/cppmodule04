/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:06:54 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 14:11:34 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
		void	makeSound() const;
};
#endif