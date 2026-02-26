/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:26 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:32:05 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "--------------------------" << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_meta->makeSound();

	delete wrong_meta;
	delete wrong_cat;

	return 0;
}