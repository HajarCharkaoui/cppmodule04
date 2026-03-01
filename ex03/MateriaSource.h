/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 17:17:49 by hacharka          #+#    #+#             */
/*   Updated: 2026/03/01 17:31:49 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource{
	private:
		AMateria* _source[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
		void	learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};
#endif