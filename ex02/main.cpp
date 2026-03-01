/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:26 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 14:12:18 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
	// const AAnimal* meta = new AAnimal();
	const AAnimal*	i = new Dog();
	const AAnimal*	j = new Cat();

	i->makeSound();
	j->makeSound();

	delete i;
	delete j;
	return 0;
}