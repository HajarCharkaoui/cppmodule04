/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:37:02 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 17:37:40 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();
		Cure*	clone() const;
		void	use(ICharacter& target);
};
#endif