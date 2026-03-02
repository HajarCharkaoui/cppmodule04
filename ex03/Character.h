/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:42:23 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/02 11:05:07 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character& other);
		Character&	operator=(const Character& other);
		std::string	const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		
};
#endif