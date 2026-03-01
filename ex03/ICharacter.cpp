/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:44:18 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 19:39:27 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.h"

ICharacter::~ICharacter() {}

std::string const & ICharacter::getName() const {}

void ICharacter::equip(AMateria* m) {}

void ICharacter::unequip(int idx) {}

void ICharacter::use(int idx, ICharacter& target) {}