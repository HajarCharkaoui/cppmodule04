/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:06:08 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 12:29:21 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		~Brain();
		std::string	getIdeas(int i) const;
		void	setIdeas(int i, std::string idea);
};
#endif