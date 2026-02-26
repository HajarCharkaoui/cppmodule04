/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:06:08 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:14:37 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{
	private:
		std::string ideas[100];
		int	index;
	public:
		Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		~Brain();
		std::string	getIdeas() const;
		void	setIdeas(std::string idea);
};
#endif