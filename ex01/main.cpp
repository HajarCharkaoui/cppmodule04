/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:26 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/27 13:56:56 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
	const int size = 4;
	Animal* shelter[size];

	std::cout << "--- CREATING SHELTER ---" << std::endl;
	for (int i = 0; i < size / 2; i++)
		shelter[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		shelter[i] = new Cat();

	std::cout << "\n--- TESTING DEEP COPY ---" << std::endl;
	Cat basic;
	{
		Cat tmp = basic;
		std::cout << basic.getType() << std::endl;
		Brain	*ideas = new Brain();
		std::cout <<"Address: " << &ideas <<std::endl;
		ideas->setIdeas(0, "First idea!");
		ideas->setIdeas(1, "Second idea!");
		ideas->setIdeas(2, "Third idea!");
		ideas->setIdeas(3, "Fourth idea!");
		basic.setBrain(ideas);
		Brain*	visi = basic.getBrain();
		for (int i = 0; i < 4; i++)
			std::cout<<visi->getIdeas(i)<< std::endl;
		
	}

	std::cout << "Basic is still alive after tmp is destroyed!" << std::endl;

	std::cout << "\n--- CLEANING UP ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete shelter[i];
	return 0;
}