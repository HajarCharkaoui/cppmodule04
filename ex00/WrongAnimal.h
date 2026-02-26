/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:07:00 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 14:09:57 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal&	operator=(const WrongAnimal& other);
		std::string	getType() const;
		void	makeSound() const;
};
#endif