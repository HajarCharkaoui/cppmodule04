/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:41:51 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 17:02:23 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		~Ice();
		Ice*	clone() const;
		void	use(ICharacter& target);
};
#endif