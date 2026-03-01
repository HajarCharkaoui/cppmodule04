/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:12 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 14:08:16 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};
#endif